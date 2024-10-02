#include<iostream>
using namespace std;
void print(int arr[], int i,int n){
    if(i==n)return;
    cout<<arr[i]<<" ";
    print(arr,++i,n);
}
void rev_print(int arr[], int n){
    if(n==0){
        return;
    }
    cout<<arr[n-1]<<" ";
    rev_print(arr,n-1);
}
int main(){
    int arr[] = {3,7,6,2,8};
    int length = sizeof(arr)/sizeof(arr[0]);
    rev_print(arr,length);
    return 0;
}