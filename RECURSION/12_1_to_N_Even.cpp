#include <iostream>
using namespace std;
void nEven(int n)
{
    if(n==0){
        return;
    }
    nEven(n-1);
    if (n % 2 == 0)
    {
        cout << n << " ";
    }
}
void rNEven(int n){
    if(n==0){
        return;
    }
    if(n%2 == 0){
        cout<<n<<" ";
    }
    rNEven(n-1);
}
int main()
{
    // nEven(10);
    rNEven(10);
    return 0;
}