let n = 313;

function isPalindrome(n) {
    n = Math.abs(n)

    let original = n;
    let rev = 0;

    while (n > 0) {
        // get last digit and add to rev 
        rev = (rev * 10) + (n % 10);
        // update n
        n = Math.floor(n / 10);
    }

    return original === rev;
}

console.log(isPalindrome(n))