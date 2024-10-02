#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node * left;
    struct node * right;;
};

/*
                   10
                  /  \
BINARY TREE =    4    8
                / \    \
               2   5   20
*/

void inorder(struct node * root){
    if(root == NULL){
        return;
    }
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
    
}

int main(){
    struct node * root = (struct node * )malloc(sizeof(struct node));
    struct node * a = (struct node * )malloc(sizeof(struct node));
    struct node * b = (struct node * )malloc(sizeof(struct node));
    struct node * x = (struct node * )malloc(sizeof(struct node));
    struct node * y = (struct node * )malloc(sizeof(struct node));
    struct node * z = (struct node * )malloc(sizeof(struct node));
    
    root->data = 10;
    a->data = 4;
    b->data = 8;
    x->data = 2;
    y->data = 5;
    z->data = 20;


    root->left = a;
    root->right = b;

    a->left = x;
    a->right = y;

    b->left = NULL;
    b->right = z;

    x->left = NULL;
    x->right = NULL;

    y->left = NULL;
    y->right = NULL;

    z->left = NULL;
    z->right = NULL;


    inorder(root);

    return 0;
}