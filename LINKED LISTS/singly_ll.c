#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node{
    int item;
    struct node * next;
};
void addFirst(struct node **head, int data){
    struct node * n = (struct node *)malloc(sizeof(struct node));
    n->item = data;
    if(head != NULL){
        n->next = *head;
        *head = n;
    }else{
        *head = n;
        n->next = NULL;
    }
}

void print(struct node *head){
    struct node * temp = head;
    while(temp != NULL){
        printf("%d->",temp->item);
        temp = temp->next;
    }
    printf("NULL\n");
}
void addLast(struct node *head,int data){
    struct node * n = (struct node *)malloc(sizeof(struct node));
    if(head != NULL){
        struct node *temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = n;
        n->next = NULL;
    }
    else{
        head = n;
        n->next = NULL;
    }
}
int main(int argc, char *argv[]){
    struct node * head = NULL;
    addFirst(&head,30);
    addFirst(&head, 20);
    addFirst(&head, 10);
    addLast(head, 40);
    print(head);
    return 0;
}