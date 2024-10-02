class Stack:
    def __init__(self):
        self.item=[]
    def is_empty(self):
        return len(self.item) == 0
    def push(self,data):
        self.item.append(data)
    def pop(self):
        if not self.is_empty():
            return self.item.pop()
        else:
            raise IndexError("Stack is empty.")
    def peek(self):
        if not self.is_empty():
            return self.item[-1]
        else:
            raise IndexError("Stack is empty.")
    def size(self):
        return len(self.item)
    
stack = Stack()
stack.push(10)
stack.push(20)
stack.push(30)
stack.push(40)
print("Top element is", stack.peek())
print("Removed element is", stack.pop())
print("Top element is", stack.peek())



"""" Time Complexity = O(n) : Reverse String Using Stack"""
def reverse_string(string=""):
    s = Stack()
    for x in string:
        s.push(x)
    y=0
    rs=""
    while y < s.size():
        rs = rs + s.pop()
        y+1
    return rs

name = "Abhi"
print(reverse_string(name))