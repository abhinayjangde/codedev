using namespace std;
#include<iostream>
class Node{
    public:
        int data;
        Node * next;
        Node(int data){
            this->data = data;
            this->next = NULL;
        }
};
class Queue{
    Node * front;
    Node * rear;
    public:
        Queue(){
            front = NULL;
            rear = NULL;
        }
        void push(int val){
            Node * n = new Node(val);
            if(front == NULL){
                front = n;
                rear = n;
            }
            else{
                front->next = n;
                front = n;
            }
        }
        void pop(){
            if(rear==NULL){
                cout<<"Queue Underflow\n";
                return;
            }
            Node * todelete = rear;
            rear = rear->next;
            delete todelete;
        }
        int peek(){
            if(rear==NULL){
                cout<<"Queue Underflow\n";
                return -1;
            }
            return rear->data;
        }
};
int main(){
    Queue q;
    q.push(20);
    q.push(2);
    q.push(3);
    q.push(35);
    q.pop();
    q.pop();
    cout<<q.peek()<<endl;
    return 0;
};