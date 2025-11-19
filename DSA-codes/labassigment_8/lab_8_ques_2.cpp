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

Node* searchRec(Node* r,int k){
    if(!r||r->data==k)return r;
    if(k<r->data)return searchRec(r->left,k);
    return searchRec(r->right,k);
}

Node* searchIter(Node* r,int k){
    while(r&&r->data!=k){
        if(k<r->data)r=r->left;
        else r=r->right;
    }
    return r;
}

Node* findMin(Node* r){
    while(r->left)r=r->left;
    return r;
}

Node* findMax(Node* r){
    while(r->right)r=r->right;
    return r;
}

Node* successor(Node* r,Node* x){
    if(x->right)return findMin(x->right);
    Node* s=NULL;
    while(r){
        if(x->data<r->data){s=r;r=r->left;}
        else r=r->right;
    }
    return s;
}

Node* predecessor(Node* r,Node* x){
    if(x->left)return findMax(x->left);
    Node* p=NULL;
    while(r){
        if(x->data>r->data){p=r;r=r->right;}
        else r=r->left;
    }
    return p;
}

int main(){
    Node* root=NULL;
    root=insertNode(root,50);
    insertNode(root,30);
    insertNode(root,70);
    insertNode(root,20);
    insertNode(root,40);

    Node* x=searchRec(root,30);

    cout<<findMin(root)->data<<"\n";
    cout<<findMax(root)->data<<"\n";
    cout<<successor(root,x)->data<<"\n";
    cout<<predecessor(root,x)->data<<"\n";
}

