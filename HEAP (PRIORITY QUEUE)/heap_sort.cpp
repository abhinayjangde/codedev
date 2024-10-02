#include<iostream>
using namespace std;

void heapify(int arr[], int index, int n)
{
    int largest = index;
    int left = 2 * index + 1;
    int right = 2 * index + 2;

    if (left < n && arr[left] > arr[largest])
    {
        largest = left;
    }
    if (right < n && arr[right] > arr[largest])
    {
        largest = right;
    }
    if (largest != index)
    {
        swap(arr[largest], arr[index]);
        heapify(arr, largest, n);
    }
}
void heapSort(int arr[], int n)
{
    // step down
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        heapify(arr, i, n);
    }
}
void printHeap(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main(){
    int arr[] = {98,2,1,43,65,8,10};
    int n = 7;
    heapSort(arr,n);
    printHeap(arr,n);
    return 0;
}