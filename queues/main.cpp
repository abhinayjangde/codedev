#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    int size = q.size();
    while(size){
        int element = q.front();
        cout<<element<<endl;
        q.pop();
        q.push(element);
        size--;
    }
    cout<<"Size is "<<q.size()<<endl;
    return 0;
};