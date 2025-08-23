let map = new Map();

let arr = [1,2,2,2,1,3];

for(let n of arr){
   map.has(n) ? map.set(n, map.get(n)+1) : map.set(n, 1);
}

let set = new Set();

for(let [key, value] of map){
    set.add(value)
}

console.log(set.size == map.size)

console.log(NaN === NaN)