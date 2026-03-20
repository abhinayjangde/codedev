class Node:
    def __init__(self,item=None,next=None):
        self.item=item
        self.next=next
class Deque:
    def __init__(self):
        self.start=None
        self.last=None
        self.item_count=0

    def is_empty(self):
        return self.item_count==0
    
    def insert_front(self,data):
        n=Node(data)
        if not self.is_empty():
            n.next=self.start
            self.start=n
        else:
            self.start=n
            self.last=n
        self.item_count+=1
    def insert_rear(self,data):
        n=Node(data)
        if not self.is_empty():
            self.last.next=n
            self.last=n
        else:
            self.last=n
        self.item_count+=1
    
    def delete_front(self):
        if not self.is_empty():
            self.start=self.start.next
            self.item_count-=1
        else:
            raise IndexError("Deque is empty")
    def delete_rear(self):
        if not self.is_empty():
            temp=self.start
            while temp.next.item != self.last.item:
                temp=temp.next
            self.last=temp
            temp.next=None
            self.last.next=None
            self.item_count-=1
        else:
            raise IndexError("Deque is empty")
    def size(self):
        return self.item_count
    def front(self):
        return self.start.item
    def rear(self):
        return self.last.item

d = Deque()
d.insert_front(1)
d.insert_front(3)
d.insert_front(6)
d.insert_rear(4)
d.insert_rear(9)
d.delete_front()
d.delete_rear()
print(d.front())
print(d.rear())
print(d.size())