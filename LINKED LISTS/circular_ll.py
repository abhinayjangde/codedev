class Node:
    def __init__(self,data=None,next=None):
        self.data=data
        self.next=next

class CLL:
    def __init__(self,last=None):
        self.last=last

    # time complexity = O(1)
    def is_empty(self):
        return self.last == None

    # time complexity = O(1)
    def insert_at_first(self,data):
        node = Node(data)
        if self.is_empty():
            self.last = node
            node.next = node
        else:
            node.next = self.last.next
            self.last.next = node
    
    # time complexity = O(1)
    def insert_at_last(self,data):
        node = Node(data)
        if self.is_empty():
            self.last = node
            node.next = node
        else:
            node.next = self.last.next
            self.last = node
        
    def insert_after(self,temp,data):
        if temp is not None:
            node = Node(data,temp.next)
            temp.next = node
            if temp == self.last:
                self.last = node
            
    def search(self,item):
        if self.is_empty():
            return None
        if self.last.data == item:
            return self.last
        temp = self.last.next
        while temp != self.last:
            if temp.data == item:
                return temp
            temp = temp.next
        return None
    def print(self):
        if self.is_empty():
            print("None")
        else:
            temp = self.last.next
            while temp != self.last:
                print(temp.data, end="->")
                temp = temp.next
            print(self.last.data,end="->None")
        
    # time complexity = O(1)
    def delete_at_first(self):
        if self.is_empty():
            return "list is empty."
        else:
            self.last.next = self.last.next.next

    def delete_at_last(self):
        if self.is_empty():
            return "list is empty."
        else:
            temp = self.last.next
            pass
    


cll = CLL()
print("is empty: ", cll.is_empty())
cll.insert_at_first(1)
cll.insert_at_first(2)
cll.insert_at_first(3)
# print(cll.search(2).data)
# cll.insert_after(cll.search(2),3)
# print(cll.search(3).data)
# cll.delete_at_first()
cll.delete_at_last()
cll.print()

