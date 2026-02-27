const arr = [1, 42, 12, 9, 2, 78]

function reverse(arr) {
    let start = 0; end = arr.length - 1;
    while (start < end) {
        // swap
        [arr[start], arr[end]] = [arr[end], arr[start]];
        start++;
        end--;
    }
}
reverse(arr)
console.log(arr)