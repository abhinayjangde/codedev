class MaxHeap{
    constructor(n){
        this.size = 0
        this.total_size = n
        this.arr = new Array(n)
    }
    insert(value){
        if(this.size==this.total_size){
            console.log("Heap Overflow\n")
            return
        }
        this.arr[this.size]=value
        let index = this.size
        this.size+=1

        // compare it with its parent
        while(index>0 && this.arr[Math.floor((index-1)/2)] < this.arr[index]){
            let temp = this.arr[Math.floor((index-1)/2)]
            this.arr[Math.floor((index-1)/2)] = this.arr[index]
            this.arr[index] = temp
        }
    }
    print(){
        this.arr.map((item)=>{
            console.log(item)
        })
    }
    heapify(index){
        let largest = index
        let left = 2*index + 1
        let right = 2*index + 2

        if(left < this.size && this.arr[left] > this.arr[largest]){
            largest = left
        }
        if(right < this.size && this.arr[right] > this.arr[largest]){
            largest = right
        }
        if(largest != index){
            let temp = this.arr[largest]
            this.arr[largest]= this.arr[index]
            this.arr[index]=temp
            this.heapify(largest)
        }
    }
    delete(){
        if(this.size==0){
            console.log("Heap Underflow\n")
            return
        }
        this.arr[0]=this.arr[this.size-1]
        this.arr.pop()
        this.size-=1
        
        if(this.size==0){
            return
        }

        this.heapify(0)
    }
}

const h = new MaxHeap(6)
h.insert(90)
h.insert(45)
h.insert(11)
h.insert(4)
h.insert(14)
h.insert(1)
h.print()
h.delete()
h.print()