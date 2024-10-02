'''
*
**
* *
*  *
*   *
*    *
*     *
********
'''

for i in range(8):
    for j in range(8):
        if i==7 or j==0 or j==i:
            print("*",end="")
        else:
            print(" ",end="")
    print()