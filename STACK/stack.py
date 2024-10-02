class Node:
    def __init__(self,data=None,next=None):
        self.data = data
        self.next = next

class Stack:
    def __init__(self,top=None):
        self.top = top
        self.size = 0
    
    def is_empty(self):
        return self.top == None
    
    def push(self,data):
        node = Node(data)
        if self.top != None:
            node.next = self.top
            self.top = node
            self.size+=1
        else:
            self.top = node
            self.size+=1

    def pop(self):
        if self.top != None:
            self.top = self.top.next
            self.size=self.size-1
        
    def peek(self):
        if self.top != None:
            return self.top.data

    def print_stack(self):
        while not self.is_empty():
            print(self.peek())
            self.pop()
    def reverse_stack(self):
        if self.is_empty():
            return
        top=self.peek()
        self.pop()
        self.reverse_stack()
        self.push(top)
    
# s = Stack()
# print(s.is_empty())
# s.push(1)
# s.push(2)
# s.push(3)
# s.push(4)
# s.push(5)
# print(s.peek())
# s.pop()
# print(s.size)
# let me know the output of above program