#include<iostream>
using namespace std;
int arr_sum(int arr[],int i, int n){
    if(i==n){
        return 0;
    }
    return arr[i] + arr_sum(arr,i+1,n);
}
int min_element(int arr[],int i, int n){
    if(i==n-1){
        return arr[i];
    }
    return min(arr[i], min_element(arr,i+1,n));
}
int main(){
    int arr[] = {3,7,6,2,8};
    int length = sizeof(arr)/sizeof(arr[0]);
    int r = min_element(arr,0,length);
    cout<<r;
    return 0;
}