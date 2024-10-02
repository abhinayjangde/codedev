# Two sum | Return the index of two elements where sum of both is equal to target value = 210

target=210
arr = [14,35,74,90,100,120,210,245,300]

# First Approach = O(n^2)
# Second Approach = O(nlogn)

# Third Approach = O(n)
def two_sum3(arr,target):
    l,r=0,len(arr)-1
    while l<=r:
        if arr[l]+arr[r] == target:
            return (l,r)
        elif arr[l]+arr[r] > target:
            r=r-1
        else:
            l=l+1
    return (-1,-1)

print(two_sum3(arr,target))
