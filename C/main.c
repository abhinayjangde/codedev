#include <stdio.h>
#include <math.h>

int fn(int arr[], int size, int i, int sum){
    if(i == size){
        return sum;
    }
    else{
        return fn(arr, size, i++, sum + arr[i]);
    }
}

int main() {

    int arr[] = {1,2,3,4};
    int sum = 0;
    int result = fn(arr, 4, 0, sum);

    printf("sum %d", result);

    return 0;
}