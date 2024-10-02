data_list = [23,12,0,90,1,2]

def bubble_sort(val):
    n = len(val)
    for i in range(n):
        for j in range(0,n-i-1):
            if val[j]>val[j+1]:
                val[j],val[j+1]=val[j+1],val[j]
                
def modified_bubble_sort(val):
    n = len(val)
    flag=True
    for i in range(n):
        for j in range(0,n-i-1):
            if val[j]>val[j+1]:
                val[j],val[j+1]=val[j+1],val[j]
                flag=False
        if flag:
            break

print(data_list)
bubble_sort(data_list) # TC=(n^2) , BEST TC = O(n)
modified_bubble_sort(data_list) # if already sorted TC=O(n)
print(data_list)

