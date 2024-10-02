#include<iostream>
using namespace std;
void pattern1(int n){
    for (int row = 1; row <= n; row++)
    {
        for(int col=1; col<=n; col++ ){
            if(col<=n-row+1){
                cout<<"* ";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
int main(){
    pattern1(4);
    
    return 0;
}