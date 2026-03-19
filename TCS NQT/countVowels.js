let s = "hello";

function countVowels(s) {
    let vowels = "aeiouAEIOU";
    let count = 0;

    for (let c of s) {
        if (vowels.includes(c)) {
            count++;
        }
    }
    return count;
}

console.log(countVowels(s));