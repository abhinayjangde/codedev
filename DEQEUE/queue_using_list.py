class Deque:
    def __init__(self):
        self.start=[]
        self.item_count=0

    def is_empty(self):
        return self.item_count==0

    def insert_front(self,data):    
        self.start.insert(0,data)
        self.item_count+=1

    def insert_rear(self,data):
        self.start.append(data)
        self.item_count+=1

    def delete_front(self):
        if not self.is_empty():
            self.start.pop(0)
            self.item_count-=1
        else:
            raise IndexError("Deque is empty")
                    
    def delete_rear(self):
        if not self.is_empty():
            self.start.pop()
            self.item_count-=1
        else:
            raise IndexError("Deque is empty")
    def get_front(self):
        return self.start[0]
    def get_rear(self):
        return self.start[-1]
    def size(self):
        return self.item_count

dq = Deque()
print(dq.is_empty())
dq.insert_front(4)
dq.insert_rear(34)
dq.insert_front(1)
dq.insert_front(90)
dq.delete_front()
dq.delete_rear()
print("Front element in deque =",dq.get_front())
print("Rear element in deqeu =",dq.get_rear())
print("Size of deque = ",dq.size())