# Rhombus
'''
    * * * * * 
   * * * * * 
  * * * * * 
 * * * * * 
* * * * * 
'''
for row in range(1,6):
    for col in range(1,10):
        if col>=6-row and col<=10-row:
            print("* ",end="")
        else:
            print(" ",end="")
    print()