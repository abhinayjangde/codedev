'''
# Ternary Search
    mid1 = l + (r-l)/3
    mid2 = r - (r-l)/3
'''

arr = [0, 2, 4, 6, 8, 10, 12, 14, 16, 18]
key = 60

def ternary_search(arr,left,right,key):
    if left <= right:
        mid1 = left + (right-left)//3
        mid2 = right - (right-left)//3

        if arr[mid1] == key:
            return mid1
        elif arr[mid2] == key:
            return mid2
        elif key < arr[mid1]:
            return ternary_search(arr,left,mid1-1,key)
        elif key > arr[mid2]:
            return ternary_search(arr,mid2+1,right,key)
        else:
            return ternary_search(arr,mid1+1,mid2-1,key)
    return -1
print(ternary_search(arr,0,len(arr)-1,key))