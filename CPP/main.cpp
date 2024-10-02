#include<bits/stdc++.h>
using namespace std;
int majorityElement(vector<int>& nums) {
        unordered_map<int,int> hash;
        int n = nums.size();
        int majorityElem;
        for(int e : nums){
            if(hash[e]){
                hash[e]++;
            }
            else{
                hash[e]=1;
            }
        }
        for(auto [e,c] : hash){
            if(c > n/2){
                majorityElem = e;
                break;
            }
        }
        return majorityElem;
    }
int main(){
    vector<int> nums = {3,2,3};
    cout<<majorityElement(nums);
    return 0;
}