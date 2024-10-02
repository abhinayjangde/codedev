# Print T shape
for i in range(5):
    for j in range(5):
        if i==0 or j==2:
            print("* ",end="")
        else:
            print("  ",end="")
    print()