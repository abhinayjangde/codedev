# Write a recursive funtion to print first N natural numbers.
def printN(n):
    if n>0:
        printN(n-1)
        print(n,end=" ")
printN(5)

# Write a recursive funtion to print first N natural numbers in reverse order.
def printNR(n):
    if n>0:
        print(n,end=" ")
        printNR(n-1)
print()
printNR(5)

# Write a recursive function to print first N odd natural numbers.
def printNOdd(n):
    if n>0:
        printNOdd(n-1)
        print(2*n-1, end=" ")
print()
printNOdd(10)

# Write a recursive funtion to print first N even natural numbers. 
def printNEven(n):
    if n>0:
        printNEven(n-1)
        print(2*n, end=" ")
print("\nfirst 10 even numbers: ",end=" ")
printNEven(10)

