# step down

def heapify(arr, index,n):
    largest = index
    left,right=2*index + 1, 2*index + 2

    if left < n and arr[left] > arr[largest]:
        largest = left
    if right < n and arr[right] > arr[largest]:
        largest = right
    if largest != index:
        arr[largest], arr[index]= arr[index], arr[largest]
        heapify(arr,largest,n)

def buildMaxHeap(arr,n):
    i=(n//2)-1
    while(i>=0):
        heapify(arr,i,n)
        i-=1

def printHeap(arr):
    for elem in arr:
        print(elem,end=' ')

arr = [10, 3, 8, 9, 5, 13, 18, 14, 11, 70]
buildMaxHeap(arr,len(arr))
printHeap(arr)