#include<iostream>
using namespace std;

class bst{
    struct node
    {
        node* left=NULL;
        node* right=NULL;
        int d=0;
        int data;
        node(int val){
            data = val;
        }
    };
    private:
        node* root;
        node* insert(int x,node* nod){
            if(!nod){
                return new node(x,d);
            }
            else{
                if(x<nod->data){
                    nod->left = insert(x,nod->left);
                }
                else if(x>nod->data){
                    nod->right = insert(x,nod->right);
                }
                else
                    cout<<"Duplicate key"<<endl;
                return nod;
            }
        }
        void post(node* nod){
            if(nod){
                post(nod->left);
                post(nod->right);
                cout<<nod->data<<endl;
            }    
        }
        void pre(node* nod){
            if(nod){
                cout<<nod->data<<endl;
                pre(nod->left);
                pre(nod->right);
            }    
        }void in(node* nod){
            if(nod){
                in(nod->left);
                cout<<nod->data<<endl;
                in(nod->right);
            }    
        }
        bool search(int x, node* nod){
            if(nod){
                if(x<nod->data)
                    search(x,nod->left);
                else if(x>nod->data)
                    search(x,nod->right);
                else{
                    cout<<"Found"<<endl;
                    return 1;
                }
            }
            else{
                cout<<"Not Found!"<<endl;
            }
            return 0;
        }
        node* remove(int x, node* nod){
            if(!nod)
                return NULL;
            if(nod->data>x)
                nod->left = remove(x,nod->left);
            else if(nod->data<x)
                nod->right = remove(x,nod->right);
            else{
                if(nod->left==NULL){
                    node* tmp = nod->right;
                    free(nod);
                    return tmp;
                }
                if (nod->right==NULL){
                    node* tmp = nod->left;
                    free(nod);
                    return tmp;
                }
                else{
                    node* tmp = nod->right;
                    tmp = min(tmp);
                    nod->data= tmp->data;
                    remove(tmp->data,tmp->right);
                }
            }
            return nod;
        }
    public:
        bst(){
            root = NULL;
        }
        void insert(int x){
            root=insert(x, root);
        }
        void in(){
            in(root);
        }
        void post(){
            post(root);
        }
        void pre(){
            pre(root);
        }
        void search(int x){
            search(x,root);
        }
        void remove(int x){
            remove(x,root);
        }
        node* min(node* nod){
            node* tmp=nod->right;
            if(nod){
            while(tmp->left)
                tmp = tmp->left;
            cout<<"Min: "<<tmp->data<<endl;
            }
            return tmp;    
        }
        int max(){
            if(root){
            node* tmp=root;
            while(tmp->right){
                tmp = tmp->right;
            }
            cout<<"Max: "<<tmp->data<<endl;
            return tmp->data;
            }
            return 0;    
        }

        void print(){

        }
};

int main(){
    bst tree;
    tree.insert(10);
    tree.insert(22);
    tree.insert(1);
    tree.insert(11);
    tree.insert(2);

    cout<<"Post"<<endl;
    tree.post();
    cout<<"Pre"<<endl;
    tree.pre();
    cout<<"Inorder"<<endl;
    tree.in();
    tree.search(10);
    tree.search(7);

    // tree.min();
    tree.max();
    tree.remove(1);
    cout<<"Post"<<endl;
    tree.post();
}
