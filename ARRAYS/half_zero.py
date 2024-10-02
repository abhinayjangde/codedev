# Find the first occurrence of zero. Size of array is given. (Facebook Technical Round)
arr = [1,90,23,14,45,76,88,0,0,0,0,0,0,0,0,0,0]
n=len(arr) # 17

# First Approach = O(n)
def first_zero_serach1(arr):
    for i in range(len(arr)):
        if arr[i] == 0:
            return i
    return -1
# print(first_zero_serach1(arr))

# Second Approach = O(logn)
start,end=0,n-1
def first_zero_serach2(arr,start,end):
    mid = start  + (end - start)//2
    while start <= end:
        if arr[mid] == 0:
            if arr[mid-1]==0:
                return first_zero_serach2(arr,start,mid-1)
            return mid
        elif arr[mid] != 0:
            if arr[mid+1]==0:
                return mid+1
            return first_zero_serach2(arr,mid+1,end)
    return -1
print(first_zero_serach2(arr,start,end))


