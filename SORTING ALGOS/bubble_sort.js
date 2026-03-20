
const arr = [4, 3, 8, 5, 1];

function bubble_sort(arr) {
    let n = arr.length;
    // let isSwap = true;

    for (let i = 0; i < n; i++) {
        for (let j = 0; j < n - i - 1; j++) {
            // 1. Compare two adjacents numbers
            if (arr[j] > arr[j + 1]) {
                //2. swap
                [arr[j], arr[j + 1]] = [arr[j + 1], arr[j]]
                isSwap = false;
            }

            // if (isSwap) {
            //     break;
            // }
        }
    }
}

bubble_sort(arr)
console.log(arr)