# Divid array in 2 subarray with equal sum
arr = [2,3,4,6,9,6]

# O(n^2)
def equal_sum(arr):
    n=len(arr)
    for i in range(n):
        j=0
        sum1,sum2=0,0
        while j<=i:
            sum1+=arr[j]
            j+=1
        k=i+1
        while k<n:
            sum2+=arr[k]
            k+=1
        if sum1 == sum2:
            return True
    return False

print(equal_sum(arr))
