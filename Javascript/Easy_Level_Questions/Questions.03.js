3. Write a function that takes three sides of a triangle and checks whether the triangle is equilateral, isosceles, or scalene.



var side1=10
var side2=10
var side3=10
if(side1==side2 && side2==side3){
  console.log("equilateral")
}
else if(side1==side2 || side2==side3 || side3==side1){
  console.log("isosceles")
}
else{
  console.log("scalene")
}