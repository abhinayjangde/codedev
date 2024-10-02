#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *left, *right;
    Node(int data){
        this->data = data;
        left = right = NULL;
    }
};
Node * createBinaryTree(){
    int x;
    cin>>x;
    if(x==-1) return NULL;
    Node * root = new Node(x);
    root->left = createBinaryTree();
    root->right = createBinaryTree();
    return root;
}
int main(){
    int arr[] = {1,2,3,-1,-1,4,-1,-1,5,6,-1,-1,7,-1,-1};
    
    Node *root = createBinaryTree();
    
    return 0;
}