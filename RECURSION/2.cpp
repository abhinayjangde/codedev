#include<iostream>
using namespace std;

// Sum of N natural numbers
int sum(int n){
    if(n==1){
        return 1;
    }
    return n + sum(n-1);
}

// Fibonacci series 0 1 1 2 3 5 8 . . .
int fib(int n){
    if(n==1 or n==0){
        return n;
    }
    return fib(n-1) + fib(n-2);
}
int main(){
    cout<<sum(2)<<endl;
    int n=5;
    cout<<(n*(n+1))/2<<endl;
    cout<<fib(6)<<endl;
    return 0;
}