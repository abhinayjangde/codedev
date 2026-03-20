#include<iostream>
using namespace std;
class Queue{
    int front,rear,size;
    int * arr;
    public:
        Queue(int n){
            front=rear=-1;
            arr = new int[n];
            size=n;
        }
        bool empty(){
            return front == -1;
        }
        bool full(){
            return (rear+1)%size == front;
        }
        void push(int val){
            if(empty()){
                front=rear=0;
                arr[0]=val;
            }
            else if(full()){
                cout<<"Queue Overflow\n";
                return;
            }
            else{
                rear = (rear+1)%size;
                arr[rear]=val;
            }
        }
        void pop(){
            if(empty()){
                cout<<"Queue Underflow\n";
                return;
            }
            else{
                if(front==rear){
                    front=rear=-1;
                }
                else{
                    front = (front+1)%size;
                }
            }
        }
        int start(){
            if(empty()){
                return -1;
            }
            return arr[front];
        }
};                  
int main(){
    Queue q(6);
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.pop();
    q.pop();
    cout<<q.start()<<endl;
    return 0;
};