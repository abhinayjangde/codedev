
arr = [23,45,22,52,10,49,90,214,1]
i = 0
j = len(arr)-1

# Time Complexity is O(n)
def min_max_element(arr):
    max_elem=0
    for elem in arr:
        if elem > max_elem:
            max_elem = elem
    min_elem = float('inf')
    for elem in arr:
        if elem < min_elem:
            min_elem=elem
    return min_elem,max_elem

## method definition = O(n)
def find_max_min(arr,i,j):
    ## small problem
    # single element
    if i == j:
        max_val=arr[i]
        min_val=arr[i]
    # two element
    elif i == j-1:
        if arr[i] < arr[j]:
            max_val=arr[j]
            min_val=arr[i]
        else:
            max_val=arr[i]
            min_val=arr[j]
    ## big problem
    else:
        # divide and conquer approach
        mid = i + (j-i)//2
        # recursion : conquer
        max1,min1=find_max_min(arr,i,mid)
        max2,min2=find_max_min(arr,mid+1,j)
        # combine
        ## to find the final maxima
        if max1 > max2:
            max_val=max1
        else:
            max_val=max2
        ## to find the final minima
        if min1 < min2:
            min_val=min1
        else:
            min_val=min2
    return max_val,min_val

max,min = find_max_min(arr,i,j)
print(f"Max value: {max} and Min value: {min}")


