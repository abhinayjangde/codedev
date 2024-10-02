# Binary Search in 2D array
arr = [[1,4,8,13],[16,19,20,25],[28,30,33,37]]
target = 370

## optimized approach = O(log(m*n))
def binary_search_2d(arr,target):
    # number of rows
    m = len(arr)
    if m==0:
        return False
    # number of colmns
    n = len(arr[0])
    left,right=0,(m*n)-1
    # binary search implementation
    while left <= right:
        mid = left + (right-left)//2
        # row_number = mid // n
        # col_number = mid % n
        mid_element = arr[mid//n][mid%n]
        if target==mid_element:
            return True
        elif target < mid_element:
            right = mid - 1
        else:
            left = mid + 1
    return False
print(binary_search_2d(arr,target))

## brute force approach = O(m*n)
def linear_search_2d(arr,target):
    if len(arr)==0:
        return False
    for row in range(len(arr)):
        for col in range(len(arr[0])):
            if arr[row][col] == target:
                return True        
    return False
print(linear_search_2d(arr,target))
