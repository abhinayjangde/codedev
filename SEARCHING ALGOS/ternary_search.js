arr = [0, 2, 4, 6, 8, 10, 12, 14, 16, 18]
key = 4

function ternary_search(arr, key) {
    let left = 0
    let right = arr.length - 1
    while (left <= right) {
        let mid1 = left + Math.floor((right - left) / 3)
        let mid2 = right - Math.floor((right - left) / 3)
        if (arr[mid1] === key) {
            return mid1
        }
        if (arr[mid2] === key) {
            return mid2
        }
        if (key < arr[mid1]) {
            right = mid1 - 1
        } else if (key > arr[mid2]) {
            left = mid2 + 1
        } else {
            left = mid1 + 1
            right = mid2 - 1
        }
    }
    return -1
}

console.log(ternary_search(arr, key))