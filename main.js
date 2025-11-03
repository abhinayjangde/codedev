let arr = [2, 7, 11, 15];
let target = 9;
let result = twoSum(arr, target);
console.log(result); // Output: [0, 1]
// two sum problem solution
function twoSum(nums, target) {
    const numMap = new Map();
    for (let i = 0; i < nums.length; i++) {
        const complement = target - nums[i];
        // i=0; target=9; complement=7
        // i=1; target=9; complement=2
        if (numMap.has(complement)) {
            return [numMap.get(complement), i];
        }
        numMap.set(nums[i], i);
    }
    return null;
}