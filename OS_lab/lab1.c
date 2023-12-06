#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
 void main(){
     pid_t pid;
     pid = getpid();

     printf("Before fork %d",pid);
     pid = fork();
     if (pid==0)
         printf("\n This lone from child, \n the child process id %d\n",getpid());
    else if(pid==1)
        printf("this line is from parent,value=%d\n");
    else if(pid<1){
        printf("\n fork failed");
    exit(1);
    }
    if(pid==0){
        execl("/bin/ls","ls","-1",(char *)0);
    }
    if(pid>0)
        wait((int*)0);
 }

