#include<stdio.h>
#include<stdlib.h>
int binarySearch(int arr[], int size, int key){
    int start=0, end = size-1,mid,i=0;
    while(start<=end){
        mid = (start+end)/2;
        if(arr[i] == key){
            return i;
        }
        else if(arr[i]>key)
    }
}
int main(int argc, char *argv[]){
    int arr[] = {4,8,10,23,45,78,90};
    int size = sizeof(arr)/sizeof(int);
    printf("%d",size);
    return 0;
}