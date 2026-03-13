let chars = ["a", "a", "b", "b", "c", "c", "c"];

function compress(chars) {
    const m = new Map();

    for (let ch of chars) {

        if (m.has(ch)) {
            m.set(ch, m.get(ch) + 1);
        } else {
            m.set(ch, 1);
        }
    }

    let s = "";
    for (let [key, value] of m) {
        s += `${key}${value}`
    }
    console.log(s);
}

compress(chars)