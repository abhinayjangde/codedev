#include<iostream>
using namespace std;
// Recursion
void roneToN(int n){
    if(n==0){
        return;
    }
    roneToN(n-1);
    cout<<n<<" ";
}
// Iterative
void oneToN(int n){
    for(int i=1; i<=n; i++){
        cout<<i<<" ";
    }
    cout<<endl;
}
int main(){
    roneToN(5);
    cout<<endl;
    oneToN(6);
    return 0;
}