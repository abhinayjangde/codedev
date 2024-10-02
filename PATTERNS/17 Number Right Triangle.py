'''
1
22
333
4444
55555
'''

for i in range(5):
    for j in range(5):
        if j<=i:
            print(i+1,end="")
        else:
            print(" ",end="")
    print()