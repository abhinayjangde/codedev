"""
Questin - Print this star pattern.
* * * *
* * * *
* * * *
* * * *
"""
# Method 1 TC = O(1)
"""
print("* * * *")
print("* * * *")
print("* * * *")
print("* * * *")
"""

# Method 2 TC = O(n)
"""
for i in range(0,4):
    print("* * * *")
"""

# Method 3 TC = O(n)
"""
i=0
while i<4:
    print("* * * *")
    i+=1
"""

# Method 4 TC = O(n^2)
"""
for i in range(0,4):
    for j in range(0,4):
        print("* ",end=" ")
    print()
"""