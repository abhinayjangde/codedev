class Node:
    def __init__(self,item=None,priority=None,next=None):
        self.item=item
        self.priority=priority
        self.next=next

class PriorityQueue:
    def __init__(self):
        self.start=None
        self.item_count=0
    def is_empty(self):
        return self.item_count==0
    def push(self,data,priority):
        n=Node(data,priority)
        if not self.start or priority<self.start.priority:
            n.next=self.start
            self.start=n
        else:
            temp=self.start
            while temp.next and temp.next.priority<=priority:
                temp=temp.next
            n.next=temp.next
            temp.next=n
        self.item_count+=1
    def pop(self):
        if self.is_empty():
            raise IndexError("PQ is empty")
        else:
            data = self.start.item
            self.start = self.start.next
            self.item_count-=1
            return data
    def size(self):
        return self.item_count
    
pq = PriorityQueue()
pq.push("Abhi",8)
pq.push("Rohan",4)
pq.push("Geeta",2)
pq.push("Kabir",10)
print("size of pq is ", pq.size())

while not pq.is_empty():
    print(pq.pop())



            
