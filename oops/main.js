const arr = [1,1,2,2,2,3,3,4,3,3,3]
const count = new Map();


function frequent(arr, count){
    for(let n of arr){
        if(count.has(n)){
            count.set(n, count.get(n) + 1);
        }else{
            count.set(n,1);
        }
    }

}
frequent(arr,count);

console.log(count)
