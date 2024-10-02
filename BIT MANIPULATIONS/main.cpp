#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<string> s = {"d","b","c","b","c","a"};
    int k=2;
    unordered_map<string,int> hash;
    for(int i=s.size()-1;i>=0;i--){
        if(!hash[s[i]]){
            hash[s[i]] = 1;
        }
        else{
            hash[s[i]]+=1;
        }
    }
    for(auto item : hash){
       cout<<item.first<<" "<<item.second<<endl;
    }

    return 0;
}