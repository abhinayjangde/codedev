#include<iostream>
using namespace std;
void bubble_sort(int arr[],int n){
    bool isSorted=true;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if(arr[j]>arr[j+1]){
                arr[j] = arr[j] + arr[j+1];
                arr[j+1] = arr[j] - arr[j+1];
                arr[j] = arr[j] - arr[j+1];
                isSorted=false;
            }
        }
        if(isSorted){
            return;
        }
    }  
}
void display(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;  
}
int main(){
    int arr[] = {32,22,1,65,8,4};
    int n = sizeof(arr)/sizeof(int);
    bubble_sort(arr,n);
    display(arr,n);
    return 0;
}