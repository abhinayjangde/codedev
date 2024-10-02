#include<stdio.h>
#include<stdlib.h>
int binarySearch(int arr[], int size, int element){
    int low,high,mid;
    low = 0;
    high = size-1;
    while(low<=high){
        mid = (low+high)/2;
        if(arr[mid] == element){
            return mid;
        }
        if(arr[mid]<element){
            low=low+1;
        }
        else{
            high = mid-1;
        }
    }
    return -1;
}
int main(){
    int arr[] = {2,4,6,7,8,9,13,15,23,45,67,89,90};
    int size = sizeof(arr)/sizeof(arr[0]);
    int element = 45;
    int searchIndex = binarySearch(arr, size, element);
    printf("The element %d was found at index %d \n", element, searchIndex);
    return 0;
}