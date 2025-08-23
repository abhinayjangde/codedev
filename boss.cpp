#include<iostream>
#include<unordered_map>
#include<vector>
#include<map>
#include<set>
#include<unordered_map>

using namespace std;

int main(){

    set<int> s;

    s.insert(1);
    s.insert(2);
    s.insert(3);

    for(int n : s){
        cout << n << " ";
    }
    cout<<s.size()<<endl;
    return 0;
}