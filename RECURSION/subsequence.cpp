#include<iostream>
#include<vector>
using namespace std;
/* # Time Complexity = O(2^n), SP=O(n^2)*/
void subseq(int arr[],int index,int n, vector<vector<int>>& ans, vector<int> temp){
    if(index==n){
        ans.push_back(temp);
        return;
    }
    // Not Inlcuded
    subseq(arr,index+1,n,ans,temp); // NO
    // Included
    temp.push_back(arr[index]);   // YES
    subseq(arr,index+1,n,ans,temp); // YES
    temp.pop_back();
}
void subseqs(string &s,int index,int n,vector<string>& ans, string temp){
    if(index==n){
        ans.push_back(temp);
        return;
    }
    // Not included
    subseqs(s,index+1,n,ans,temp);
    // Included
    temp.push_back(s[index]);
    subseqs(s,index+1,n,ans,temp);
    temp.pop_back();
}
int main(){
    // subsequence in array
    /*
    int arr[] = {1,2,3};
    vector<vector<int>> ans;
    vector<int> temp;
    subseq(arr,0,3,ans,temp);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    */

   string s = "abc";
   vector<string> ans;
   string temp;
   subseqs(s,0,s.size(),ans,temp);
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<endl;
    }
    

    return 0;
}