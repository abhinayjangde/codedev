class Node:
    def __init__(self,item=None,prev=None,next=None):
        self.item=item
        self.prev=prev
        self.next=next 
class CircularDLL:
    def __init__(self):
        self.start=None
    def is_empty(self):
        return self.start==None 
    def insert_at_first(self, data):
        n=Node(data)
        if not self.is_empty():
            n.next=self.start
            n.prev=self.start.prev
            self.start.prev.next=n
            self.start.prev=n
            self.start=n
        else:
            self.start=n
            n.next=n
            n.prev=n
    def insert_at_last(self,data):
        n=Node(data)        
        if not self.is_empty():
            n.prev=self.start.prev
            n.next=self.start
            self.start.prev.next=n 
            self.start.prev=n 
        else:
            self.start=n
            n.next=n
            n.prev=n
    def insert_after(self,data,temp):
        n=Node(data)
        if not self.is_empty():
            n.next=temp.next
            n.prev=temp
            temp.next.prev=n 
            temp.next = n 
        else:
            self.start=n
            n.next=self.start
            n.prev=self.start

    def search(self,data):
        if not self.is_empty():
            temp=self.start
            while temp.next != self.start:
                if temp.item == data:
                    return temp
                temp = temp.next
        else:
            return None 
    def traverse(self):
        if not self.start:
            print("List is empty")
            return

        current = self.start
        while True:
            print(current.item, end="->")
            current = current.next
            if current == self.start:
                print("None")
                break
    def delete_frist(self):
        if not self.is_empty():
            self.start.next.prev=self.start.prev
            self.start.prev.next = self.start.next
            self.start=self.start.next
        else:
            return None
    def delete_last(self):
        if not self.is_empty():
            self.start.prev.prev.next=self.start
            self.start.prev = self.start.prev.prev
        else:
            return None



cdll = CircularDLL()
cdll.insert_at_first(3)
cdll.insert_at_first(6)
cdll.insert_at_first(1)
cdll.insert_at_last(5)
cdll.insert_after(10,cdll.search(3))
cdll.delete_frist()
cdll.delete_last()
cdll.traverse()
# print(cdll.search(3).next.item)