let arr = [3, 2, 4];
let target = 6;

var twoSum = function (nums, target) {

    let map = new Map();

    for (let i = 0; i < nums.length; i++) {
        let comp = target - nums[i];
        if (map.has(comp)) {
            return [map.get(comp), i];
        }

        map.set(nums[i], i);
    }
    return null;
};
// twoSum(arr, target);

let nums = [0, 0, 1, 1, 1, 2, 2, 3, 3, 4]
var removeDuplicates = function (nums) {
    if (nums.length === 0) return 0;

    let i = 0, j = 0;
    while (j < nums.length) {
        if (nums[i] === nums[j]) {
            j++;
        }
        else {
            i++;
            nums[i] = nums[j]
            j++;
        }
    }

    console.log(nums)
    return i + 1;

}

console.log(removeDuplicates(nums))
