#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int getOccurrence(int arr[], int n, int key){
    int count;
    for (int i = 0; i < n; i++)
    {
        if(arr[0] == key){
            count++;
        }
    }
    
}
int main(int argc, char *argv[]){
    int arr[] = {1,2,3,1,2,4,6,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("%d\n",getOccurrence(arr,n,1));
    return 0;
}