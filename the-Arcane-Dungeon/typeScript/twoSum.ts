// Problem link: https://leetcode.com/problems/two-sum/submissions/1633054263/

// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].


function twoSum(nums: number[], target: number): number[] {
    let remaining: Map<number, number> = new Map();

    for(let i=0; i<nums.length; i++){
        let diff:number = target-nums[i];
        if(remaining.has(diff)){
            return [remaining.get(diff)!, i];
        } else{
            remaining.set(nums[i], i);
        }
    }

    return [];

};