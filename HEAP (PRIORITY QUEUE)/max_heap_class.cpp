#include<iostream>
using namespace std;

class MaxHeap{
    int * arr;
    int size;
    int total_size;
    public:
    MaxHeap(int n){
        arr = new int[n];
        size=0;
        total_size=n;
    }
    void insert(int val){
        if(size ==total_size){
            cout<<"Heap Overflow\n";
            return;
        }
        arr[size]=val;
        int index = size;
        size++;
        while(size>0 && arr[(index-1)/2] < arr[index]){
            swap(arr[(index-1)/2],arr[index]);
            index = (index-1)/2;
        }
    }
    void print(){
        for(int i=0; i<size; i++){
            cout<<arr[i]<<endl;
        }
    }
};

int main(){
    MaxHeap heap(6);
    heap.insert(4);
    heap.insert(41);
    heap.insert(45);
    heap.insert(9);
    heap.insert(100);
    heap.insert(200);
    heap.print();

    return 0;
}