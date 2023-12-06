#include<stdio.h>
#include<semaphore.h>
#include<pthread.h>
#define NBUFF 10

int nitems;
struct{
	int buff[NBUFF];
	sem_t mutex,nempty,nstored;
}shared;

void *produce(void*);
void *consume(void*);
int main(int argc,char**argv){
	pthread_t tid_produce,tid_consume;
	printf("Argc: %d",argv[1]);
	if(argc!=2){
		printf("usage:filename<nitems>");
		return 0;
	}
	printf("\n\nproducer_consumer problem using semaphore \n");
	printf(".......................................................................................\n");
	nitems=atoi(argv[1]);
	sem_init(&shared.mutex,0,1);
	sem_init(&shared.nempty,0,NBUFF);
	sem_init(&shared.nstored,0,0);
	pthread_setconcurrency(2);
	pthread_create(&tid_produce,NULL,produce,NULL);
	pthread_create(&tid_consume,NULL,consume,NULL);
	pthread_join(tid_produce,NULL);
	pthread_join(tid_consume,NULL);
	sem_destroy(&shared.mutex);
	sem_destroy(&shared.nempty);
	sem_destroy(&shared.nstored);
}

void *produce(void *arg){
	int i;
	for(i=0;i<nitems;i++){
	sem_wait(&shared.nempty);
	sem_wait(&shared.mutex);
	shared.buff[i%NBUFF]=i;
	printf("\tproducer........");
	printf("buff[%d]=%d\n\n",i,shared.buff[i%NBUFF]);
	sem_post(&shared.mutex);
	sem_post(&shared.nstored);
	sleep(3);
	}
	return NULL;
}

void *consume(void *arg){
	int i;
	for(i=0;i<nitems;i++){
	sem_wait(&shared.nstored);
	sem_wait(&shared.mutex);
	printf("\tconsumer.............");
	printf("buff[%d]=%d\n\n\n",i,shared.buff[i%NBUFF]);
	sem_post(&shared.mutex);
	sem_post(&shared.nempty);
	sleep(3);
	}
	return NULL;
}
