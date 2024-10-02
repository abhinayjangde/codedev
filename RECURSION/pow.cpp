#include<iostream>
using namespace std;
int pow(int num, int n){
    if(n==0){
        return 1;
    }
    // if(n==1){
    //     return num;
    // }
    return num*pow(num,n-1);
}
int square(int n){
    if(n==1){
        return 1;
    }
    return n*n + square(n-1);
}
int main(){
    // int num=2,n=3;
    // cout<<pow(num,n)<<endl;

    cout<<square(3)<<endl;
    return 0;
}