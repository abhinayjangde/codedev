class Stack:
    def __init__(self):
        self.item=[]
    def is_empty(self):
        return len(self.item) == 0
    def push(self,data):
        if not self.is_empty():
            if self.item[-1] > data:
                self.item.append(data)
            else:
                self.item.insert(len(self.item)-1,data)
        else:
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

s = Stack()
s.push(10)
s.push(100)
s.push(14)
s.push(9)
s.push(8)
print(s.peek())