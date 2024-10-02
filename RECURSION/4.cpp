#include<iostream>
#include<vector>
using namespace std;
int firstOccurence(vector<int>v , int key, int i)
{   
    if(i==v.size()-1){
        return -1;
    }
    if(v[i] == key){
        return i;
    }
    return firstOccurence(v,key,i+1);
}
int lastOccurence(vector<int> v, int key, int i){
    if(i<0){
        return -1;
    }
    if(v[i] == key){
        return i;
    }
    return lastOccurence(v,key,i-1);
}
int main(){
    vector<int> v = {1,2,3,34,4,5,2,4,6,5,2};
    cout<<firstOccurence(v,2,0)<<endl;
    cout<<"Last Occurence "<<lastOccurence(v,2,v.size()-1)<<endl;

    return 0;
}