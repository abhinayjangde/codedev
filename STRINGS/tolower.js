// https://leetcode.com/problems/to-lower-case

s = "Hello"
function toLower(s) {
    ans = []
    chars = s.split("")
    for (let c of chars) {
        let code = c.charCodeAt(0);
        if ('A'.charCodeAt(0) <= code && code <= 'Z'.charCodeAt(0)) {
            ans.push(String.fromCharCode(code + 32))
        }
        else {
            ans.push(c)
        }
    }
    return ans.join("")
}

toLower(s)