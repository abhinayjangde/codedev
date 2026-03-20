arr = [4,1,5,2,3]

# ascending order sorting

def bubble_sort(arr):
    """
    send largest element at the end
    """
    for i in range(0,len(arr)):
        for j in range(0,len(arr)-i-1):
            if arr[j] > arr[j+1]:
                arr[j],arr[j+1] = arr[j+1], arr[j]

    print(arr)
bubble_sort(arr)
