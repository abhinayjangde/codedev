#include<iostream>
#include<vector>
using namespace std;
// Check if array is sorted or not
bool isSorted(vector<int> arr, int i){
    if(i == arr.size()-1)
        return true;
    if(arr[i]>arr[i+1]){
        return false;
    }
    return isSorted(arr,i+1);
}
int main(){
    vector<int> arr = {1,2,3,4,5};
    cout<<isSorted(arr,0);
    return 0;
}