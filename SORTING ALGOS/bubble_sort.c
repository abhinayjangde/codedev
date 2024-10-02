#include<stdio.h>
#include<stdlib.h>

void printArray(int * A, int n){
    for(int i=0; i<n; i++){
        printf("%d ", A[i]);
    }
    printf("\n");
}

void bubbleSort(int * A, int n){
    int temp;
    int isSorted = 0;
    for(int i=0; i<n-1; i++){
        isSorted = 1;
        for(int j=0; j<n-1-i; j++){
            if(A[j]>A[j+1]){
                temp =A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
                isSorted = 0;
            }

        }
        if(isSorted){
            return;
        }
    }
}
int main(){
    
    int A[] = {20,12,30,15,4,2,8,1};
    int n = sizeof(A)/sizeof(A[0]);
    printf("Unsorted : ");
    printArray(A,n);
    bubbleSort(A,n);
    printf("Sorted   : ");
    printArray(A,n);
    return 0;
}