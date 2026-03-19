let arr = [12, 5, 1, 9, 3];

function largestElem(arr) {
    let max = -Infinity;

    for (let n of arr) {
        if (n > max) max = n;
    }
    return max;
}

console.log(largestElem(arr));