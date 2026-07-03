
// memoization
function fib(n, dp = {}) {

    if (n <= 1) return n;

    if (dp[n] !== undefined) return dp[n];
    dp[n] = fib(n - 1, dp) + fib(n - 2, dp);
    return dp[n];
}

console.log(fib(6));