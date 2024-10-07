// 30. Write a program to input an integer 'n' and print the sum of all its even digits and the sum of all its odd digits separately. Example : Input: 'n' = 132456, Output: 12, 9
// Explanation:
// The sum of even digits = 2 + 4 + 6 = 12
// The sum of odd digits = 1 + 3 + 5 = 9


var number=12
var sum_even=0
var sum_odd=0

for(i=0;i<=number;i++){
  if(i%2==0){
    sum_even+=i
  }else{
    sum_odd+=i
  }
}
console.log(`sum of the even number :${sum_even}`)
console.log(`sum of the odd number :${sum_odd}`)
