arr = [3,5,20,45,2,-5,9]

def prefix_sum(arr):
    ans=[0]*len(arr)
    ans[0]=arr[0]
    for i in range(1,len(arr)):
        ans[i]=ans[i-1]+arr[i]
    return ans

print("Orginal Array: ", arr)
print("Prefix Sum Array: ", prefix_sum(arr))