// 52.Given an array nums, the running sum of an array is defined as runningSum[i] = sum(nums[0]…nums[i]).
// Example:
// Input: nums = [1, 2, 3, 4]
// Output: [1, 3, 6, 10]


var nums = [1, 2, 3, 4]
var sum=0
var arr=[1, 2, 3, 4]
for(i=0;i<nums.length;i++){
  
    sum=sum+nums[i]
  
  arr[i]=sum
}
console.log(arr)