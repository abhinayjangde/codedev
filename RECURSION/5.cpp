#include<iostream>
using namespace std;
long long int pow(int x, int n){
    int ans=1;
    for (int i = 0; i < n; i++)
    {
        ans*=x;
    }
    return ans;
    
}
long long int power(int x, int n){
    if(n==0){
        return 1;
    }
    return x * power(x, n-1);
}
int optPower(int x, int n){
    if(n==0){
        return 1;
    }
    int halfPower = optPower(x,n/2);
    int halfPowerSq = halfPower * halfPower; 
    // if n is odd
    if(n%2 != 0){
        halfPowerSq = x * halfPowerSq;
    }
    return halfPowerSq;
}
int main(){
    cout<<pow(2,30)<<endl;
    // cout<<power(2,50)<<endl;
    // cout<<optPower(2,10)<<endl;
    return 0;
}