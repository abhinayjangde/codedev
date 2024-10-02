from collections import deque

d = deque([12])

d.append(2)  # time complexity = O(1)
d.append(4) # time complexity = O(1)
d.appendleft(9) # time complexity = O(1)
d.pop() # time complexity = O(1)
d.popleft()  # time complexity = O(1)
d.append(3)
d.appendleft(30)
d.appendleft(30)

print(f"Length of the deque is = {len(d)}")
# d.clear() # clear all elements using 

"""
# Deque(deck) supports positive and negative indexing
    d[0]    # leftmost element
    d[-1]   # rightmost element
"""
print("leftmost element",d[0])
# d.rotate(2) # Rotate to the right by 2 steps

print(d.count(30)) # count the number of deque element
d.remove(300)
for x in d:
    print(x,end=" ")

