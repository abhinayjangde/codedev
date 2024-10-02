#include<iostream>
#include<cmath>
using namespace std;
int min(int arr[], int n){
    int min_index=0;
    int min=arr[0];
    for (int i = 1; i < n; i++)
        if(arr[i]<arr[min_index])
            min_index=i;
            min=arr[min_index];
    return min_index;
}

void display(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[] = {4,10,3,90,2,6,1};
    int n = sizeof(arr)/sizeof(int);
    display(arr,n);
   
    display(arr,n);

    return 0;
}