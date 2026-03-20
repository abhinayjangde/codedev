class Node:
    def __init__(self,data=None,next=None,prev=None):
        self.data = data
        self.next = next
        self.prev = prev

class DLL:
    def __init__(self,head=None):
        self.head = head

    def is_empty(self):
        return self.head == None
    
    def insert_at_start(self, data):
        n = Node(data)
        if self.head == None:
            self.head = n
        else:
            n.next = self.head
            n.prev = None
            self.head.prev = n
            self.head = n

    def insert_at_start2(self,data):
        n = Node(data,self.head,None)
        if not self.is_empty():
            self.head.prev = n
        self.head = n
            
    def insert_at_end(self,data):
        n = Node(data)
        if self.head == None:
            self.head = n
        else:
            temp = self.head
            while temp.next != None:
                temp = temp.next
            temp.next = n
            n.prev = temp
            n.next = None
  
    def insert_at_after(self,item,data):
        n = Node(data)
        if self.head != None:
            temp = self.head
            while temp != None:
                if temp.data == item:
                    n.next = temp.next
                    n.prev = temp
                    temp.next = n
                    break
                temp = temp.next
        else:
            print("doubly ll is empty")

    def traverse(self):
        temp = self.head
        while temp != None:
            print(temp.data,end="-> ")
            temp = temp.next
        print("None")

    def clear(self):
        self.head = None

    def what_befor_item(self,item):
        if self.head != None:
            temp = self.head
            while temp != None:
                if(temp.data == item):
                    return temp.prev.data
                temp = temp.next
        
    def what_after_item(self,item):
        if self.head != None:
            temp = self.head
            while temp != None:
                if temp.data == item:
                    return temp.next.data
                temp = temp.next
    def search_item(self,item):
        if self.head is not None:
            temp = self.head
            while temp is not None:
                if temp.data == item:
                    return temp
                temp = temp.next
            return None

    def delete_at_start(self):
        if self.head is not None:
            self.head = self.head.next
            self.head.next.prev = None
    
    # iterator
    def __iter__(self):
        return DLLIterator(self.head)

class DLLIterator:
    def __init__(self,head):
        self.current = head
    def __iter__(self):
        return self
    def __next__(self):
        if not self.current:
            raise StopIteration
        item = self.current.data
        self.current = self.current.next
        return item




dllist = DLL()
print(dllist.is_empty())
dllist.insert_at_start(4)
dllist.insert_at_start(3)
dllist.insert_at_start(5)
dllist.insert_at_end(1)
dllist.insert_at_end(9)
dllist.insert_at_after(1,2)
# dllist.clear()
dllist.traverse()
print(dllist.what_befor_item(2))
print(dllist.what_after_item(2))
result = dllist.search_item(4)
print(result.data)
dllist.delete_at_start()
dllist.delete_at_start()
dllist.insert_at_start2(23)
dllist.traverse()

for x in dllist:
    print(x, end=" ")

print()
 
