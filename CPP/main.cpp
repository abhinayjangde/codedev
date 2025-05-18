#include<iostream>

using namespace std;

int factorial(int n){
    // base condition
    cout<<"runs "<<n<<endl;
    if(n==1 || n == 0) return 1;
    return n * factorial(n-1);
}


int main(){
   
    cout<<factorial(5)<<endl;

}