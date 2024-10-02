#include<iostream>
using namespace std;
int sumOfN(int n, int sum){
    if(n==0){
        return sum;
    }
    return sumOfN(n-1,sum+n);
}
int sum(int n){
    if(n==1){
        return n;
    }
    return n + sum(n-1);
}

int main(){
    cout<<sumOfN(5,0)<<endl;
    cout<<sum(5)<<endl;

    return 0;
}