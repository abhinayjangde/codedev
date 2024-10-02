#include <iostream>
using namespace std;
class MinHeap
{
    int *arr;
    int size;
    int capacity;

public:
    MinHeap(int n)
    {
        arr = new int[n];
        size = 0;
        capacity = n;
    }
    void heapify(int index)
    {
        int smallest = index;
        int left = 2 * index + 1;
        int right = 2 * index + 2;

        if (left < size && arr[left] < arr[smallest])
        {
            smallest = left;
        }
        if (right < size && arr[right] < arr[smallest])
        {
            smallest = right;
        }

        if (smallest == index)
        {
            return;
        }
        swap(arr[index], arr[smallest]);
        heapify(smallest);
    }
    void insert(int value)
    {
        if (size == capacity)
        {
            cout << "Heap Overflow" << endl;
            return;
        }
        arr[size] = value;
        int index = size;
        size++;

        while (index > 0 && arr[(index - 1) / 2] > value)
        {
            swap(arr[index], arr[(index - 1) / 2]);
            index = (index - 1) / 2;
        }
        cout << value << " inserted into heap" << endl;
    }
    void print()
    {
        for (int i = 0; i < size; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    void remove()
    {
        if (size == 0)
        {
            cout << "Heap Underflow..." << endl;
            return;
        }
        arr[0]=arr[size-1];
        size--;
        if(size==0){
            return;
        }

        heapify(0);
    }
};

int main()
{
    MinHeap h(5);
    h.insert(90);
    h.insert(100);
    h.insert(40);
    h.insert(20);
    h.print();

    return 0;
}