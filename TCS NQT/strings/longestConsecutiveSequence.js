let s = "abbcccddddeeeeedcba";

function longestConsecutiveSequence(s) {
    let max = 0;
    const m = new Map();
    for (let ch of s) { // TC = O(n)
        if (m.has(ch)) {
            m.set(ch, m.get(ch) + 1)
        } else {
            m.set(ch, 1);
        }
        if (m.get(ch) > max) {
            max = m.get(ch)
        }
    }


    console.log(max)
    return max;
}

longestConsecutiveSequence(s)