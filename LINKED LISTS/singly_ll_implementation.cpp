#include<iostream>
using namespace std;
class Node{
    public:
        int item;
        Node* next;

        Node(int item){
            this->item=item;
            this->next=nullptr;
        }
};
class LinkedList{
    private:
        Node* head;
    public:
        LinkedList(){
            this->head=nullptr;
        }
        void insert_at_first(int value){
            Node* n = new Node(value);
            if(head==nullptr){
                head = n;
            }
            else{
                n->next = head;
                head = n;
            }
        }
        void insert_at_last(int value){
            Node * n = new Node(value);
            if(head==nullptr){
                head=n;
            }
            else{
                Node * temp = head;
                while(temp->next!=nullptr){
                    temp = temp->next;
                }
                temp->next = n;
            }
            
        }
        void display(){
            if(head!=nullptr){
                Node * temp = head;
                while(temp!=nullptr){
                    cout<<temp->item<<" ";
                    temp =temp->next;
                }
            }
        }
};
int main(){
    LinkedList l;
    l.insert_at_first(2);
    l.insert_at_first(3);
    l.insert_at_last(1);
    l.display();


    return 0;
}