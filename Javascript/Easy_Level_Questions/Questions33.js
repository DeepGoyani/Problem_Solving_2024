// 33. Write a program that takes a year as input and checks whether it is a century year (a year divisible by 100).
// Explanation:
// The function isCenturyYear takes a parameter year.
// It checks if the year is divisible by 100 using the modulus operator (%):
// If year % 100 === 0, it prints that the year is a century year.
// Otherwise, it prints that it is not a century year


var year=100

if(year%100==0){
  console.log("the year is a century year.")
}else{
  console.log("it is not a century year.")
}
