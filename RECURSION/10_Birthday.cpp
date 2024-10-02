#include<iostream>
using namespace std;
void birthday(string name,int day){
    // TC = O(n)
    if(day==0){
        cout<<"Happy Birthday, "<<name<<endl;
        return;
    }
    cout<<day<<" Days left for birthday."<<endl;
    birthday(name,day-1);
}
int main(){
    birthday("Abhinay", 10);
    return 0;
}