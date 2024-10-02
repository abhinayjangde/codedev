"""
      *
    * *
  * * *
* * * *
"""

for row in range(1,5):
    for col in range(1,5):
        if col>=5-row:
            print("* ",end="")
        else:
            print("  ",end="")
    print()