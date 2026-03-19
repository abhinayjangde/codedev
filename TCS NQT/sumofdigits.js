let n = -1234;

function sumOfDigits(n) {

    n = Math.abs(n) // handle negative numbers
    let sum = 0;

    while (n > 0) {
        // find last digit
        sum += n % 10;
        // update n
        n = Math.floor(n / 10);
    }
    return sum;
}

console.log(sumOfDigits(n));