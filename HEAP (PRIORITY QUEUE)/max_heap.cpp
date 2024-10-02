#include <iostream>
using namespace std;
class MaxHeap
{
    int *arr;
    int size;       // total element in heap
    int total_size; // total size of array

    public:
        MaxHeap(int n)
        {
            arr = new int[n];
            size = 0;
            total_size = n;
        }
        void insert(int value){
            if(size == total_size){
                cout<<"Heap Overflow\n";
                return;
            }
            arr[size]=value;
            int index = size;
            size++;

            // Compare it with its parent
            while(index>0 && arr[(index-1)/2] < arr[index]){
                swap(arr[(index-1)/2],arr[index]);
                index = (index-1)/2;
            }
            cout<<arr[index]<<" is insert to the heap\n";
        }
        void print(){
            for(int i=0; i<size; i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }

        void delete_one(){
            if(size==0){
                cout<<"Heap Underflow\n";
                return;
            }
            cout<<arr[0]<<" deleted from the heap"<<endl;
            arr[0]=arr[size-1];
            size--;

            if(size==0){
                return;
            }
            // Heapify
            heapify(0);
        }

        void heapify(int index){
            int largest = index;
            int left = 2*index + 1;
            int right = 2*index + 2;

            if(left<size && arr[left]>arr[largest]){
                largest=left;
            }
            if(right<size && arr[right]>arr[largest]){
                largest=right;
            }

            if(largest!=index){
                swap(arr[index],arr[largest]);
                heapify(largest);
            }
        }   
    
};
int main()
{

    MaxHeap h1(6);
    h1.insert(4);
    h1.insert(14);
    h1.insert(11);
    h1.print();
    h1.insert(45);
    h1.insert(90);
    h1.insert(1);
    h1.print();
    h1.delete_one();
    h1.print();
        
    return 0;
}