#include<bits/stdc++.h>
using namespace std;
class BST{
    public:
        int data;
        BST *left, *right;
        BST(int value){
            this->data = value;
            this->left = this->right = NULL;
        }
};
BST* insert(BST* root, int value){
    if(!root){
        BST * node = new BST(value);
        return node;
    }
    if(value < root->data){
        root->left = insert(root->left,value);
    }
    else{
        root->right = insert(root->right,value);
    }
    return root;
}
void preorder(BST*root){
    if(root){
        cout<< root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }
}
void inorder(BST* root){
    if(!root) return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
bool search(BST* root,int val){
    if(!root) return 0;
    if(val==root->data) return 1;
    if(val<root->data){
        return search(root->left,val);
    }
    else{
        return search(root->right,val);
    }

}
BST* remove(BST* root, int x){
    
}
int main(){
    int arr[] = {3,4,7,1,6,8};
    BST * root = NULL;
    for(int i=0; i<6; i++){
        root = insert(root,arr[i]);
    }

    inorder(root);
    cout<<endl;
    
    return 0;
}