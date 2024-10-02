#include<iostream>
using namespace std;
int min_value(int arr[], int n){
    int ans=INT_MAX; 
    for (int i = 0; i < n; i++)
    {
        if(arr[i]<ans){
            ans=arr[i];
        }
    }
    return ans;
}
int max_value(int arr[], int n){
    int ans = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>ans){
            ans=arr[i];
        }
    }
    return(ans); 
}
int main(){
    int arr[5] = {3,10,2,45,76};
    
    cout<<min_value(arr,5)<<endl;
    cout<<max_value(arr,5)<<endl;
    
    return 0;
} 