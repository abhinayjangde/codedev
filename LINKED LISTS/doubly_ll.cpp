#include<bits/stdc++.h>
using namespace std;
class Node{
    int val;
    Node*prev,*next;
    public:
        Node(int data){
            this->val=data;
            prev=next=nullptr;
        }
        void insert_at_first(Node* head,int data){
            if(head==nullptr){
                head->val=data;
                return;
            }
            Node* n = new Node(data);
            n->next=head;
            head->prev=n;
            head=n;
        }
        void print(Node* head){
            if(head==nullptr) return;
            Node* temp = head;
            while(temp!=nullptr){
                cout<<temp->val<<" ";
                temp=temp->next;
            }
        }
};
int main(){
    Node * head= new Node(2);
    head->insert_at_first(head,4);
    head->print(head);
    return 0;
}