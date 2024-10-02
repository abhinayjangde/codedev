# Amazon Interview Question : Find the power of a number
# Time Complexity = O(logn)
def power(a,n):
    # base case
    if n==0:
        return 1
    if n==1:
        return a
    # body
    result = power(a,n//2)
    if n%2==0:
        return result * result
    else:
        return result * result * a
        

print(power(2,10))
# print(power(2,11))