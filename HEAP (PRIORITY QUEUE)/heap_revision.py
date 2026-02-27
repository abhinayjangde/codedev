class MinHeap:
    def __init__(self):
        self.heap = []

    def leftChildIndex(self,i):
        return (2*i + 1)
    def rightChildIndex(self,i):
        return (2*i + 2)
    def parentNodeIndex(self, i):
        return (i-1)//2
    
    def insert(self,val):
        self.heap.append(val);
        lastIndex = len(self.heap)-1
        self.heapify(lastIndex)
    def heapify(self, i):
        while i > 0:
            parentIndex = self.parentNodeIndex(i)
            if self.heap[parentIndex] > self.heap[i]:
                # swap
                self.heap[parentIndex],self.heap[i] = self.heap[i], self.heap[parentIndex]
                i = parentIndex
            else:
                break

heap = MinHeap()
heap.insert(10);
heap.insert(5);
heap.insert(20);
heap.insert(30);
heap.insert(2);
print(heap.heap)