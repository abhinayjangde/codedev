class MaxHeap:
    def __init__(self,n):
        self.arr = []
        self.size = 0
        self.total_size=n
    
    def insert(self,value):
        if self.size==self.total_size:
            print("Heap Overflow\n")
            return
        self.arr.append(value)
        index = self.size
        self.size+=1

        # compare it with its parent
        while index>0 and self.arr[(index-1)//2] < self.arr[index]:
            self.arr[(index-1)//2],self.arr[index]=aself.rr[index],self.arr[(index-1)//2]
        print(f"{self.arr[index]} is inserted.")
        
    def show(self):
        for i in self.arr:
            print(i,end=" ")

    def heapify(self,index):
        largest = index
        left = 2*index + 1
        right = 2*index + 2

        if(left < self.size and self.arr[left]>self.arr[largest]):
            largest = left
        if(right < self.size and self.arr[right]>self.arr[largest]):
            largest = right
        if(largest!=index):
            self.arr[index],self.arr[largest]=self.arr[largest],self.arr[index]
            self.heapify(largest)
        

    def delete(self):
        if self.size==0:
            print("Heap Underflow\n")
            return
        
        self.arr[0]=self.arr[-1]
        self.arr.pop(-1)
        self.size-=1

        if self.size==0:
            return
        
        self.heapify(0)
        
    
h = MaxHeap(6)
h.insert(90)
h.insert(45)
h.insert(11)
h.insert(4)
h.insert(14)
h.insert(1)
h.show()
h.delete()
print("\n")
h.show()