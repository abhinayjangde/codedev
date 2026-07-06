
// memoization
function fib(n, dp = {}) {

    if (n <= 1) return n;

    if (dp[n] !== undefined) return dp[n];
    dp[n] = fib(n - 1, dp) + fib(n - 2, dp);
    return dp[n];
}

// console.log(fib(6));

let arr = [1, 2, 3, 4];

// function sumArray(arr) {

//     function helper(index) {
//         if (index === arr.length) return 0;
//         return arr[index] + helper(index + 1);
//     }
//     return helper(0);

// }

// console.log(sumArray(arr));
console.log(arr.pop());
console.log(arr);