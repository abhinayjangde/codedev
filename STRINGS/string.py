columnNumber=28
res=""
while columnNumber > 0:
    columnNumber-=1
    ch = ord('A') + (columnNumber%26)
    print(ch)
    res+=chr(ch)
    print(res)
    columnNumber=columnNumber//26
    print(columnNumber)
print(res)