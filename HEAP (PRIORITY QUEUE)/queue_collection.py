import queue

pq = queue.PriorityQueue() # min heap

arr = [1,2,12,190,1213,32,342]
for i in arr:
    pq.put(i)
print(pq.get())

# pq = queue.PriorityQueue() # max heap

# arr = [1,2,12,190,1213,32,342]
# for i in arr:
#     pq.put(-i)
# print(-pq.get())
