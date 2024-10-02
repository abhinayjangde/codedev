'''
* * * * * * *
  * * * * *
    * * *
      *
'''

for row in range(1,5):
    for col in range(1,8):
        if col>=row and col<=8-row:
            print("* ",end='')
        else:
            print("  ",end='')
    print()