#include<iostream>
using namespace std;
void pattern(int n){
    for(int row=1; row<=n; row++){
        for(int col=1; col<=n; col++){
            if(col<=row-1){
                cout<<"  ";
            }
            else{
                cout<<"*"<<" ";
            }
        }
        cout<<endl;
    }
}
void pattern2(int n){
    for(int row=1; row<=n; row++){
        for(int col=1; col<=n; col++){
            if(col>=row){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}
int main(){
    pattern2(9);
    return 0;
}