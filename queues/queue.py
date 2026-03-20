# Queue = FIFO (First In First Out)
"""
rear = insertion
front = deletion
"""
class Node:
    def __init__(self,item=None,next=None):
        self.item=item
        self.next=next
class Queue:
    def __init__(self):
        self.front=None
        self.rear=None
        self.item_count=0

    def is_empty(self):
        return self.item_count==0
    
    def enqueue(self,data):
        n=Node(data)
        if not self.is_empty():
            self.rear.next=n
        else:
            self.front=n
        self.rear=n
        self.item_count+=1
    
    def dequeue(self):
        if not self.is_empty():
            self.front = self.front.next
            self.item_count-=1
        else:
            raise IndexError("Queue is underflow")
    
    def get_front(self):
        if not self.is_empty():
            return self.front.item
        else:
            raise IndexError("Queue is underflow")

    def get_rear(self):
        if not self.is_empty():
            return self.rear.item
        else:
            raise IndexError("Queue is underflow")
    
    def size(self):
        return self.item_count

q = Queue()
q.enqueue(1)
q.enqueue(2)
q.enqueue(3)
q.dequeue()
q.dequeue()
# q.dequeue()
print(q.is_empty())
print(q.get_front())
print(q.get_rear())