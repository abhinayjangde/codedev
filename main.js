s = "dfa123214afd"
function f1(s) {
    const digits = [] // O(n) space
    for (let c of s) { // O(n) time
        if (Number(c)) {
            digits.push(Number(c));
        }
    }
    return digits.sort((a, b) => b - a)[1]; // O(n) time
}

console.log(f1(s))