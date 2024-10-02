'''
*      * 
 *    *  
  *  *   
   *    
  *  *   
 *    *  
*      *
'''
n = int(input("Enter number of lines: "))
for row in range(1,n+1):
    for col in range(1,n+1):
        if col==row or col==n+1-row:
            print("* ",end="")
        else:
            print(" ",end="")
    print()