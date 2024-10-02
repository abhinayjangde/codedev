#include<iostream>
#include<vector>
using namespace std;
vector<int> findNeg(vector<int> v){
    vector<int> ans;
    for(int i=0; i<v.size()-1; i++){
        if(v.at(i)<0){
            ans.push_back(v.at(i));
        }
    }
    return ans;
}
void display(vector<int> v){
    for (int i = 0; i < v.size()-1; i++)
    {
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
    
}
int main(){
    vector<int> v = {1,2,-4,5,12,-9,-5};
    vector<int> ans = findNeg(v);
    display(ans);

    return 0;
}