#include <iostream>
#include<vector>
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
void BuildMaxHeap(int arr[], int n)
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

void heapSort(int arr[],int n){
    for(int i=n-1; i>0; i--){
        swap(arr[0],arr[i]);
        heapify(arr,0,i);
    }
}
int main()
{
    int arr[] = {5,1,1,2,0,0};
    BuildMaxHeap(arr, 6); // TC = O(n)
    heapSort(arr,6); // TC = O(nlogn)
    printHeap(arr, 6);

    return 0;
}