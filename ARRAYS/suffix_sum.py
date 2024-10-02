arr = [3,5,20,45,2,-5,9]

def suffix_sum(arr):
    n = len(arr)
    ans=[0]*n
    ans[n-1]=arr[n-1]
    # print(ans)
    for i in range(n-2,-1,-1):
        ans[i]=ans[i+1]+arr[i]
    return ans

print("Orginal Array: ", arr)
print(suffix_sum(arr))