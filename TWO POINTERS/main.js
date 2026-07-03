let str = "abhinay"; // immutable

function reverseString(str) {
    let s = 0;
    let e = str.length - 1;

    while(s<=e){
        [str[s], str[e]] = [str[s], str[e]];
        s++;
        e--;
    }
}

reverseString(str);
console.log(str);