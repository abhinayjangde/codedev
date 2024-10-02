arr = [23,45,10,90,2,80,12]

def merger(arr1,arr2):
    ans=[len(arr1)*len(arr2)] * None
    i,j=0,0
    while(i<len(arr1)):
        if(arr1[i]<arr2[j]):
            ans[i]=arr1[1]
            i+=1
        else:
            ans[i] = arr2[j]
            j+=1
    return ans
def merge_sort(arr,start,end):
    mid = start - (end-start)//2
    if(start<=end):
        if(mid==1):
            return arr[mid]
        return merger(merge_sort(arr,start,mid),merge_sort(arr,mid+1,end))

print(merge_sort(arr,0,len(arr)-1))
