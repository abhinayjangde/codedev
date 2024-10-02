import sys
sys.path.append("../linked list")
from singly_ll import SinglyLL

class Stack(SinglyLL):
    def __init__(self):
        super().__init__()
        self.item_count = 0
    def is_empty(self):
        return self.start == None
    
    def push(self,item):
        self.insert_at_start(item)
        self.item_count+=1
    def pop(self):
        if not self.is_empty():
            self.item_count-=1
            return self.delete_first()
        else:
            raise IndexError("Stack Underflow")
    def peek(self):
        if not self.is_empty():
            return self.start.data
        else:
            raise IndexError("Stack Underflow")
    def size(self):
        return self.item_count
    # restrict other object methods
    def print_list(self):
        raise AttributeError("no attribute 'print_list' in Stack.")
    def insert_after(self):
        raise AttributeError("no attribute 'insert_after' in Stack.")
    def insert_at_last(self):
        raise AttributeError("no attribute 'insert_at_last' in Stack.")
    def delete_last(self):
        raise AttributeError("no attribute 'delete_last' in Stack.")
    def delete_item(self):
        raise AttributeError("no attribute 'delete_item' in Stack.")
       
st = Stack()
st.push(4)
print(st.is_empty())
st.push(1)
st.push(19)
st.push(6)
st.pop()
print(st.size())
print(st.peek())




