nums = [4,90,3,2,10,45] # mutable

def bubble_sort(nums):
    n = len(nums)
    flag = True
    for i in range(0,n):
        for j in range(0,n-i-1):
            # if jth element is > j+1 th element
            if nums[j] > nums[j+1]:
                # swap
                nums[j],nums[j+1] = nums[j+1],nums[j]
                flag = False
        if flag:
            break

bubble_sort(nums)

print(nums)