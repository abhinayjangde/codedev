#include<stdio.h>
#include<stdlib.h>
int linearSeach(int arr[], int size, int element){
    for(int i=0; i<size; i++){
        if(arr[i] == element){
            return i;
        }
    }
    return -1;
 }
int main(){
    int arr[] = {2,19,20,45,28,30,40,3,7};
    int size = sizeof(arr)/sizeof(arr[0]);
    int element = 28;
    int searchIndex = linearSeach(arr, size, element);
    printf("The element %d was found at index %d \n", element, searchIndex);

    return 0;
}