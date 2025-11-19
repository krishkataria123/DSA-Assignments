#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int v){data=v;left=right=NULL;}
};

Node* insertNode(Node* r,int v){
    if(!r)return new Node(v);
    if(v<r->data)r->left=insertNode(r->left,v);
    else if(v>r->data)r->right=insertNode(r->right,v);
    return r;
}

Node* findMin(Node* r){
    while(r->left)r=r->left;
    return r;
}

Node* deleteNode(Node* r,int k){
    if(!r)return r;
    if(k<r->data)r->left=deleteNode(r->left,k);
    else if(k>r->data)r->right=deleteNode(r->right,k);
    else{
        if(!r->left){
            Node* t=r->right;
            delete r;
            return t;
        }
        else if(!r->right){
            Node* t=r->left;
            delete r;
            return t;
        }
        Node* t=findMin(r->right);
        r->data=t->data;
        r->right=deleteNode(r->right,t->data);
    }
    return r;
}

int maxDepth(Node* r){
    if(!r)return 0;
    int l=maxDepth(r->left);
    int t=maxDepth(r->right);
    return 1+(l>t?l:t);
}

int minDepth(Node* r){
    if(!r)return 0;
    if(!r->left)return 1+minDepth(r->right);
    if(!r->right)return 1+minDepth(r->left);
    int l=minDepth(r->left);
    int t=minDepth(r->right);
    return 1+(l<t?l:t);
}

int main(){
    Node* root=NULL;
    root=insertNode(root,40);
    insertNode(root,20);
    insertNode(root,60);
    insertNode(root,10);
    insertNode(root,30);

    root=deleteNode(root,20);

    cout<<maxDepth(root)<<"\n";
    cout<<minDepth(root)<<"\n";
}

