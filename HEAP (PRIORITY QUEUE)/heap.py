class MaxHeap:
    def __init__(self,n):
        self.arr=[None] * n
        self.size=0
        self.totol_size=n

    def push(self,val):
        if self.size==self.totol_size:
            print("Heap Overflow\n")
            return
        self.arr[self.size]=val
        index = self.size
        self.size+=1
        while index>0 and self.arr[(index-1)//2] < self.arr[index]:
            self.arr[(index-1)//2],self.arr[index]=self.arr[index],self.arr[(index-1)//2]
            index=(index-1)//2
    def heapify(self,index):
        largest = index
        left = 2*index+1
        right = 2*index+2
        if left<self.size and self.arr[left]>self.arr[largest]:
            largest = left
        if right<self.size and self.arr[right]>self.arr[largest]:
            largest = right
        if largest!=index:
            self.arr[index],self.arr[largest]=self.arr[largest],self.arr[index]
            self.heapify(largest)
    def remove(self):
        if self.size == 0:
            print("Heap Underflow\n")
            return
        self.arr[0]=self.arr.pop(self.size-1)
        self.size-=1
        index=0
        self.heapify(index)
            
    def show(self):
        for item in self.arr:
            if item is not None:
                print(item,end=" ")
        print()
    
# heap = MaxHeap(6)
# heap.push(4)
# heap.push(14)
# heap.push(2)
# heap.push(20)
# heap.push(90)
# heap.remove()
# heap.show()

class MinHeap:
    def __init__(self,n):
        self.arr = [None] * n
        self.size = 0
        self.total_size = n 
    def push(self, val):
        if self.size==self.total_size:
            print("Heap Overflow\n")
            return
        self.arr[self.size]=val
        index = self.size
        self.size+=1
        while index>0 and self.arr[(index-1)//2] > self.arr[index]:
            self.arr[(index-1)//2], self.arr[index]=self.arr[index],self.arr[(index-1)//2]
            index = (index-1)//2
    def show(self):
        for item in self.arr:
            if item is not None:
                print(item,end=" ")
        print()
    def heapify(self,index):
        smallest = index
        left = 2*index+1
        right = 2*index+2
        if left<self.size and self.arr[left]<self.arr[smallest]:
            smallest = left
        if right<self.size and self.arr[right]<self.arr[smallest]:
            smallest = right
        if smallest!=index:
            self.arr[index],self.arr[smallest]=self.arr[smallest],self.arr[index]
            self.heapify(smallest)
    def remove(self):
        if self.size==0:
            print("Heap Underflow\n")
            return
        self.arr[0]=self.arr.pop(self.size-1)
        self.size-=1
        index=0
        self.heapify(index)

# heap = MinHeap(6)
# heap.push(4)
# heap.push(14)
# heap.push(2)
# heap.push(1)
# heap.push(10)
# heap.remove()
# heap.show()