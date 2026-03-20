#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<char> s;
    s.push('a');
    s.push('b');
    s.push('c');
    s.push('d');
    cout<<s.front()<<endl;
    cout<<s.back()<<endl;
    s.pop();
    cout<<s.front()<<endl;
    cout<<s.empty()<<endl;
    cout<<s.size()<<endl;
    return 0;
};