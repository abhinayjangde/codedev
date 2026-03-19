let n = -1234;

function reverseANumber(n) {
    let rev = 0;

    n = Math.abs(n);
    while (n > 0) {
        // find the last digit 
        let digit = n % 10; // 2
        rev = (rev * 10) + digit // 430 + 2 = 4321
        n = Math.floor(n / 10) // 1
    }

    return rev;
}

console.log(reverseANumber(n));