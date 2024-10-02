#include<iostream>
using namespace std;
int main(){
    for(int row=1;row<=5; row++){
        for(int col=1;col<=5-row;col++){
            cout<<" ";
        }
        for(int col=1; col<=2*row-1; col++){
            char ch = 'A' + row - 1;
            cout<<ch;
        }
        cout<<endl;
    }
    return 0;
}