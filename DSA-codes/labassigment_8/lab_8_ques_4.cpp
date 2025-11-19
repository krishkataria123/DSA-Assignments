#include <iostream>
#include <climits>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int v){data=v;left=right=NULL;}
};

bool isBSTUtil(Node* r,int minV,int maxV){
    if(!r)return true;
    if(r->data<=minV||r->data>=maxV)return false;
    return isBSTUtil(r->left,minV,r->data) &&
           isBSTUtil(r->right,r->data,maxV);
}

bool isBST(Node* r){
    return isBSTUtil(r,INT_MIN,INT_MAX);
}

int main(){
    Node* root=new Node(20);
    root->left=new Node(10);
    root->right=new Node(30);

    cout<<isBST(root);
}

