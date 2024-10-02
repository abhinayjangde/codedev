''' # Hollo Rectangle
* * * * * 
*       * 
*       * 
*       * 
*       * 
* * * * *
'''
"""rows = 5  # Number of rows
columns = 5  # Number of columns

for i in range(rows):
    for j in range(columns):
        if i == 0 or i == rows - 1 or j == 0 or j == columns - 1:
            # Print '*' for the first and last row, and the first and last column
            print("*", end=" ")
        else:
            # Print a space for the inner part of the pattern
            print(" ", end=" ")
    print()  # Move to the next line after each row
"""

for i in range(6):
    for j in range(5):
        if i== 0 or i == 5 or j==0 or j==4:
            print("* ",end="")
        else:
            print("  ",end="")
    print()