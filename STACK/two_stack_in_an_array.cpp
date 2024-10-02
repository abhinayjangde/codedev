#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class TwoStack{
    public :
    int *arr;
    int size;
    int top1;
    int top2;
    TwoStack(int n){
        size = n;
        arr = new int[n];
        top1 = -1;
        top2 = size;
    }
    void push1(int x){
        if(top1+1==top2){
            cout<<"Stack Overflow";
            return;
        }
        top1++;
        arr[top1] = x;
    }
    void push2(int x){
        if(top2-1==top1){
            cout<<"Stack Overflow";
            return;
        }
        top2--;
        arr[top2] = x;
    }
    int pop1(){
        if(top1==-1){
            cout<<"Stack Underflow";
            return -1;
        }
        int res = arr[top1];
        top1--;
        return res;
    }
    int pop2(){
        if(top2==size){
            cout<<"Stack Underflow";
            return -1;
        }
        int res = arr[top2];
        top2++;
        return res;
    }
};
int main(){
    
    return 0;
};