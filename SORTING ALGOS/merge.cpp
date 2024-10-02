#include<iostream>
#include<vector>
using namespace std;
void merge(int arr[],int start,int mid, int end){
    vector<int> temp(end-start+1);
    int left = start,right=mid+1,index=0;
    while(left<=mid && right<=end){
        if(arr[left]<=arr[right]){
            temp[index] = arr[left];
            index++;left++;
        }
        else{
            temp[index]=arr[right];
            index++;right++;
        }
    }
    // Agar left array me element hai
    while(left<=mid){
        temp[index]=arr[left];
        index++;left++;
    }
    // Agar right array me element hai
    while(right<=end){
        temp[index]=arr[right];
        index++;right++;
    }
    // Put these values in array
    index=0;
    while (start<=end)  
    {
        arr[start]=temp[index];
        start++;index++;
    }
    
}
void merge_sort(int arr[], int start, int end){ // O(nlogn)
    if(start==end){
        return;
    }
    int mid = start + (end-start)/2;
    merge_sort(arr,start, mid); // left array
    merge_sort(arr,mid+1,end); // right array
    merge(arr,start,mid,end);

}
void print_array(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}
int main(){
    int arr[] = {4,2,36,10,1,4,7,3,4,1};
    merge_sort(arr,0,10);
    print_array(arr,10);
    return 0;
}