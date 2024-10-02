# Inverted Half Pyramid
"""
* * * *
* * *
* *
*
"""

# Method 1 

n = 4
for row in range(1,n+1):
    for col in range(1,n+1):
        if col<=n+1-row:
            print("* ",end="")
        else:
            print("  ",end="")
    print()
    