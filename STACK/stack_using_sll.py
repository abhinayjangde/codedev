import sys
sys.path.append("../linked list")
from singly_ll import SinglyLL

class Stack:
    def __init__(self):
        self.start = SinglyLL()
        self.item_count=0
    def is_empty(self):
        return self.item_count == 0
    def push(self,data):
        self.start.insert_at_start(data)
        self.item_count+=1
    def pop(self):
        data=self.start.delete_first()
        self.item_count-=1
        return data
    def peek(self):
        if not self.item_count:
            return self.start.start.data
    def size(self):
        return self.item_count

s = Stack()
s.push(1)
s.push(2)
s.push(3)
s.push(4)
print(s.peek())
s.pop()
print(s.size())