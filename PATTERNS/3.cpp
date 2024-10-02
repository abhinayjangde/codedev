#include<iostream>
using namespace std;
int main(){
    /* Method 1 */
    cout<<"Method 1"<<endl;
    cout<<"* * * *"<<endl;
    cout<<"* * * *"<<endl;
    cout<<"* * * *"<<endl;
    cout<<"* * * *"<<endl;
    
    // Method 2
    cout<<"Method 2"<<endl;
    for(int i=1; i<=4; i++){
        cout<<"* * * *"<<endl;
    }

    // Method 3
    cout<<"Method 3"<<endl;
    for(int row=1; row<=4; row++){
        for(int col=1; col<=4; col++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}