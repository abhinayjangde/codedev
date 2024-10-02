class MinHeap:
    def __init__(self,n):
        self.size = 0
        self.totol_size = n
        self.arr = []

    def heapify(self,index):
        smallest = index
        left = 2*index + 1
        right = 2*index + 2
        
        if(left < self.size and self.arr[left] < smallest):
            smallest = left
        if(right < self.size and self.arr[right] < smallest):
            smallest = right
        
        if(smallest == index):
            return
        self.arr[index],self.arr[smallest]=self.arr[smallest],self.arr[index]
        self.heapify(smallest)

    def insert(self,value):
        if(self.size == self.totol_size):
            print("Heap Overflow\n")
            return
        self.arr.append(value)
        index = self.size
        self.size+=1

        # compare it with its parent
        while index > 0 and self.arr[(index-1)//2] > value:
            self.arr[index],self.arr[(index-1)//2]=self.arr[(index-1)//2],self.arr[index]
            index = (index-1)//2
        print(f"{value} inserted into heap")
    def show(self):
        for item in self.arr:
            print(item, end=" ")
        
    def delete(self):
        if(self.size==0):
            print("Heap Underflow")
            return
        self.arr[0]=self.arr[-1]
        self.arr.pop()
        self.size-=1

        if(self.size==0):
            return
        
        self.heapify(0)

h = MinHeap(5)
h.insert(90)
h.insert(100)
h.insert(40)
h.insert(20)
h.show()
        