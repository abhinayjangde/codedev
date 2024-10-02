#include<iostream>
using namespace std;
class Node{
    public:
        int data,height;
        Node *left, *right;

        Node(int value){
            data = value;
            height = 1;
            left = right = NULL;
        }
};

int getHeight(Node *root){
    if(!root) return 0;
    return root->height;
}
int getBalance(Node* root){
    return getHeight(root->left) - getHeight(root->right);
}
Node* insert(Node * root,int key){
    // Doesn't exist
    if(!root){
        return new Node(key);
    }
    // Exist
    if(key<root->data){
        root->left = insert(root->left,key); // left Side
    }
    else if(key>root->data){
        root->right = insert(root->right,key); // Right Side
    }
    else{
        return root; // Duplication values not allowed
    }

    // Update Height
    root->height = 1 + max(getHeight(root->left),getHeight(root->right));

    // Balancing Check
    int balance = getBalance(root);
}
int main(){

    // Duplicate elements not allowed
    Node *root = NULL;

    root = insert(root,10);
    root = insert(root,20);
    root = insert(root,30);
    root = insert(root,50);
    root = insert(root,70);
    root = insert(root,5);
    root = insert(root,100);
    root = insert(root,95);

    return 0;
}