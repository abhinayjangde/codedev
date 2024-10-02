#include<iostream>
using namespace std;
class BasicRecursion{
    public:
        void printDec(int n){
            if(n==1){
                cout<<n;
                return;
            }
            cout<<n<<" ";
            printDec(n-1);
        }
        void printInc(int n){
            if(n==1){
                cout<<n<<" ";
                return;
            }
            printInc(n-1);
            cout<<n<<" ";
        }
};
int main(){
    int n=10;
    BasicRecursion b;
    b.printDec(n);
    cout<<endl;
    b.printInc(n);
    return 0;
}