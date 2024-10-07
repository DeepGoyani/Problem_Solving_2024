// 37. Given a sorted array and a target value, return the starting and ending position of that target in the array.
// Example:Input: [5, 7, 7, 8, 8, 10], target=8 ,Output: [3, 4]


var arr=[5,7,7,8,8,10]
var target=8 
var index=[]
for(i=0;i<arr.length;i++){
  if(arr[i]==target){
  index+=i
  }
}
console.log(index)