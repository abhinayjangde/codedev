arr = [12,90,23,3,45,10]

def selection_sort(arr):
    for i in range(len(arr)-1):
        index=i
        for j in range(i+1, len(arr)):
            if arr[j] < arr[index]:
                index = j 
        # swapping
        temp = arr[i]
        arr[i] = arr[index]
        arr[index] = temp
        # another way of swapping
        '''arr[i],arr[index]=arr[index],arr[i]'''

selection_sort(arr)
print(arr)