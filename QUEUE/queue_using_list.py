# Queue data structure using list class
# Queue = FIFO (First In First Out)
"""
rear = insertion
front = deletion
"""
class Queue:
    def __init__(self):
        self.queue = list()
        self.item_count=0
    
    def is_empty(self):
        return len(self.queue) == 0
    
    def enqueue(self,data):
        self.queue.append(data)
        self.item_count+=1

    def dequeue(self):
        self.queue.pop(-1)
        self.item_count-=1

    def get_front(self):
        return self.queue[0]

    def get_rear(self):
        return self.queue[-1]

    

q = Queue()
print(q.is_empty())
q.enqueue(1)
q.enqueue(2)
q.enqueue(3)
q.enqueue(4)
q.enqueue(5)
q.dequeue()
print(q.get_front())
print(q.get_rear())