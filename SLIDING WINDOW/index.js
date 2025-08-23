
let nums = [1,5,12,8,2,4]

// window size = 3 | Brute Force
/*
function slidingWindow(nums){
    let max = 0;
    for(let i=0; i<nums.length-3; i++){
        let sum = 0;
        for(let j=i; j<i+3; j++){
            sum = sum + nums[j];
        }
        if(i==nums.length - 3){
            break;
        }
        max = Math.max(sum,max);
    }
    return max;
}
const result = slidingWindow(nums)
console.log(result)
*/

// window size = 3 | Brute Force + Optimization
// function slidingWindow(nums){
//     let prefixSum = [nums[0]]
//     for(let i=1; i<nums.length; i++){
//         console.log(prefixSum)
//         prefixSum.push(prefixSum[i-1] + nums[i])
//     }
//     return prefixSum
// }
// const result = slidingWindow(nums)
// console.log(result)
