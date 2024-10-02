#include<bits/stdc++.h>
using namespace std;

void bubble_sort(vector<int>& arr){
    bool isSorted=false;
    for(int i=0; i<arr.size(); i++){
        for(int j=1; j<arr.size()-i; j++){
            if(arr[j-1]>arr[j]){
                swap(arr[j-1],arr[j]);
            }
            else{
                isSorted=true;
            }
        }
        if(isSorted){
            return;
        }
    }
}
int main(){
    vector<int> arr = {1,2,3,4,8,6};
    bubble_sort(arr);
    for(auto e : arr){
        cout<<e<<" ";
    }
    return 0;
}