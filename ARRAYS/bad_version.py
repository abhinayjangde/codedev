'''
You are a product manager and currently leading a team to develop a new product.
Unfortunately, the latest version of your product fails the quality check. Since each
version is developed based on the previous version, all the versions after a bad version
are also bad. Suppose you have n version and you want to find out the first bad one,
which causes all the following ones to be bad. Also, talk about the time complexity of
your code.
Test Cases:
Input: [0,0,0,1,1,1,1,1,1]
Output: 3
Explanation: 0 indicates a good version and 1 indicates a bad version. So, the index of
the first 1 is at 3. Thus, the output is 3
'''
arr = [0,0,0,0,1,1,1,1,1]

left,right=0,len(arr)-1
def first_bad_version(arr,left,right):
    mid = left + (right-left)//2
    while left <= right:
        if arr[mid]==1:
            if arr[mid-1]==1:
                return first_bad_version(arr,left,mid-1)
            return mid
        elif arr[mid]!=1:
            if arr[mid+1]!=1:
                return first_bad_version(arr,mid+1,right)
            return mid+1
    return -1

print(first_bad_version(arr,left,right))
