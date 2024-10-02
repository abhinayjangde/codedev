#include<iostream>
using namespace std;
class Node{
    private:
        int item;
        Node * next;
    public:
        Node(){}
        Node(int data){
            this->item=data;
            this->next = NULL;
        }
        Node(int data, Node * next){
            this->item = data;
             this->next=next;
        }
        void insert_at_first(Node *head, int data){
            Node *n = new Node(data);
            if(head==NULL){
                head=n;
                n->next=NULL;
            }
            else{
                n->next = head;
                head = n;
            }
        }

        void display(Node * head){
            if(head!=NULL){
                Node * temp = head;
                while (temp != NULL)
                {
                    cout<<temp->item<<"->";
                    temp = temp->next;
                }
                cout<<"NULL";
            }
            else{
                cout<<"List is empty"<<endl;
            }

        }
    
};
int main(){
    Node * head = NULL;
    Node * list = new Node();
    list->insert_at_first(head,3);
    list->insert_at_first(head,54);
    list->insert_at_first(head, 90);
    list->display(head);

    return 0;
}