#include <bits/stdc++.h>
using namespace std;
struct node
{
    int item;
    node *left;
    node *right;
};

class BST
{
private:
    node *root;
    void rpreorder(node*);
    void rinorder(node*);
    void rpostorder(node*);

public:
    BST();
    bool empty();
    void insert(int);
    void preorder();
    void inorder();
    void postorder();
    node* search(int data);
};
BST::BST()
{
    root = NULL;
}
bool BST::empty()
{
    return root == NULL;
}
void BST::insert(int data)
{

    node *ptr;
    if (root == NULL)
    {
        node *n = new node;
        n->right = NULL;
        n->item = data;
        n->right = NULL;
        root = n;
    }
    else
    {
        bool flag = true;
        ptr = root;
        while (flag)
        {
            if (data == ptr->item)
                break;
            if (data > ptr->item)
            {
                // left subtree;
                if (!ptr->left)
                {
                    node *n = new node;
                    n->right = NULL;
                    n->item = data;
                    n->right = NULL;
                    ptr->left = n;
                    flag = false;
                }
                else
                {
                    ptr = ptr->left;
                }
            }
            else
            {
                // right subtree
                if (!ptr->right)
                {
                    node *n = new node;
                    n->right = NULL;
                    n->item = data;
                    n->right = NULL;
                    ptr->right = n;
                    flag = false;
                }
                else
                {
                    ptr = ptr->right;
                }
            }
        }
    }
}

void BST::rpreorder(node * root){
    if(root){
        cout<<root->item<<" ";
        rpreorder(root->left);
        rpreorder(root->right);
    }
}
void BST::preorder(){
    rpreorder(root);
}
void BST::rinorder(node * root){
    if(root){
        rinorder(root->left);
        cout<<root->item<<" ";
        rinorder(root->right);
    }
}
void BST::inorder(){
    rinorder(root);
}

void BST::rpostorder(node * root){
    if(root){
        rpostorder(root->left);
        rpostorder(root->right);
        cout<<root->item<<" "; 
    }
}
void BST::postorder(){
    rpostorder(root);
}

node * BST::search(int data){
    node * ptr = root;
    while(ptr){
        if(ptr->item == data){
            return ptr;
        }
        else if(data < ptr->item){
            ptr = ptr->left;
        }
        else{
            ptr = ptr->right;
        }
    }
    return NULL;
}
int main()
{
    BST n = BST();
    // cout<<n.empty();
    n.insert(10);
    // n.insert(3);
    // n.insert(5);
    n.insert(3);
    n.preorder();
    node * res = n.search(3);
    cout<<res->item;
    return 0;
}