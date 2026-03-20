#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 100

int queue[MAX_SIZE];
int front = -1, rear = -1;

void enqueue(int element){
    if(rear == MAX_SIZE-1){
        printf("Queue is full\n");
        return;
    }
    else if(front == -1 && rear == -1){
        front = rear = 0;
    }
    else{
        rear = rear+1;
    }
    queue[rear] = element;
}

int dequeue(){
    if(front == -1 || front > rear){
        printf("Queue is empty\n");
        return -1;
    }
    int element = queue[front];
    front = front + 1;
    return element;
}

int peek(){
    if(front == -1 || front > rear){
        printf("Queue is empty\n");
        return -1;
    }
    return queue[front];
}

int isEmpty(){
    if(front == -1 || front > rear){
        return 1;
    }
    return 0;
}

int main(){
    enqueue(4);
    enqueue(19);
    enqueue(10);
    enqueue(20);
    enqueue(1);

    dequeue();
    
    // Printing the all element of the Queue
    while(!isEmpty()){
        printf("%d ", dequeue());
    }
    return 0;
}