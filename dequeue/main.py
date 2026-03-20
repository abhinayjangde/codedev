from collections import deque

deck = deque([1,2,3,4,5,6])
d = deque('hello')

for elem in d:
    print(elem.upper(),end=" ")

d.append(" ")
d.append("A")
print()
print(d)
print(list(reversed(d))) # list the contents of a deque in reverse
