""" # Half Pyramid
*
* *
* * *
* * * *
"""

# Method 1 TC = O(n^2)
"""
n=4
for row in range(1,n+1):
    for col in range(1, n+1):
        if col<=row:
            print("*",end=" ")
        else:
            print(" ",end=" ")
    print()
"""

""" # Half Pyramid
A
A B
A B C
A B C D

This code uses nested loops, where the outer loop controls the number of rows (n), and the inner loop prints the characters from 'A' to 'A + i' in each row. The chr() function is used to convert an ASCII value to its corresponding character, and ord() is used to get the ASCII value of a character.
"""
'''
for row in range(0,4):
    for col in range(0,4):
        if col<=row:
            print(chr(ord('A') + col), end=" ")
        else:
            print(" ",end=" ")
    print()
'''