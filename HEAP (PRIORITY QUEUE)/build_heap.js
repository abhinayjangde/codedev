
const heapify = (arr, index ,n)=>{
    largest = index
    left = 2*index+1
    right= 2*index+2

    if(left < n && arr[left] > arr[largest]){
        largest = left
    }
    if(right < n && arr[right] > arr[largest]){
        largest = right
    }
    if(largest != index){
        let temp = arr[largest]
        arr[largest]=arr[index]
        arr[index] = temp
        heapify(arr,largest,n)
    }

}
const buildMaxHeap = (arr,n)=>{
    for(let i=(n/2)-1; i>=0; i--){
        heapify(arr,i,n)
    }
}
function printHeap(arr){
    arr.map((item)=>{
        console.log(item)
    })
}
arr = [10, 3, 8, 9, 5, 13, 18, 14, 11, 70]
buildMaxHeap(arr,arr.length)
printHeap(arr)