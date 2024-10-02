#include<iostream>
using namespace std;
void pattern(int n);
int main(){
    pattern(5);
    return 0;
}

void pattern(int n){
    for(int row=1; row<=n; row++){
        for(int col=1; col<=n; col++){
            if(col<=row){
                cout<<"* ";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

}