// 1.Write a function to check the grade of a student based on the score:
// 90-100: A
// 80-89: B
// 70-79: C
// 60-69: D
// Below 60


var marks=72

if(marks>=90 && marks<=100){
  console.log("A Grade")
}
else if(marks>=80 && marks<90){
   console.log("B Grade")
}
 else if(marks>=70 && marks<=79){
  console.log("C Grade")
}
 else if(marks>=60 && marks<=69){
  console.log("D Grade")
}
else if(marks<60 ){
  console.log("F Grade")
}
else{
  console.log("marks not valid")
}
