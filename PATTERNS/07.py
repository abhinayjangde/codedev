'''
      *
    * * *
  * * * * *
* * * * * * * 
'''

for row in range(1,5):
    for col in range(1,8):
        if col>=5-row and col<=3+row:
            print("* ",end='')
        else:
            print("  ",end='')
    print()