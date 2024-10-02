class PriorityQueue:
    def __init__(self):
        self.items=[]

    def is_empty(self):
        return len(self.items) == 0
    def push(self,data,priority):
        index=0
        while index < len(self.items) and self.items[index][1] <= priority:
            index+=1
        self.items.insert(index,(data,priority))

    def pop(self):
        if self.is_empty():
            raise IndexError("PQ is empty")
        else:
            return self.items.pop(0)[0]
    def size(self):
        return len(self.items)

pq = PriorityQueue()

pq.push("Abhi",4)
pq.push("Yogesh",2)
pq.push("Devesh",12)
pq.push("Saurabh",5)
pq.push("Twinkle",9)
print(pq.size())
# print(pq.pop())

while not pq.is_empty():
    print(pq.pop())

    

        