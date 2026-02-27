class MinHeap {
    constructor() {
        // this.heap = [5, 10, 20, 30];
        this.heap = [];
    }

    leftChildIndex(i) {
        return (2 * i + 1);
    }

    rightChildIndex(i) {
        return (2 * i + 2);
    }

    parentNodeIndex(i) {
        return Math.floor((i - 1) / 2);
    }

    insert(val) {
        this.heap.push(val);
        let lastIndex = this.heap.length - 1;
        this.heapify(lastIndex);
    }

    heapify(i) {
        while (i > 0) {
            let parentIndex = this.parentNodeIndex(i);
            if (this.heap[parentIndex] > this.heap[i]) {
                // swap
                [this.heap[parentIndex], this.heap[i]] = [this.heap[i], this.heap[parentIndex]]
                i = parentIndex;
            } else {
                break;
            }
        }
    }
}

const heap = new MinHeap();
heap.insert(2)
console.log(heap)