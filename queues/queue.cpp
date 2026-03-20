#include<iostream>
using namespace std;
class Queue{
    int front,rear,size;
    int * arr;
    public:
        Queue(int n){
            arr = new int[n];
            front=rear=-1;
            size = n;
        }
        bool empty(){
            return front==-1;
        }
        bool full(){
            return rear==size-1;
        }
        void push(int val){
            if(empty()){
                rear=front=0;
                arr[0]=val;
                return;
            }
            if(full()){
                cout<<"Queue Overfloww\n";
                return;
            }
            else{
                rear++;
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
                }else{
                    front++;
                }
            }
        }
        int start(){
            if(empty()){
                cout<<"Queue Underflow\n";
                return -1;
            }
            else{
                return arr[front];
            }
        }
};
int main(){
    Queue q(5);
    q.push(10);
    q.push(80);
    q.push(12);
    q.pop();
    cout<<q.start()<<endl;
    return 0;
};