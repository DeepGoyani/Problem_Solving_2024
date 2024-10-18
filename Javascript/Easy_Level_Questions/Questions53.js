57


59.

var num1=1 
var  num2=8 
var opration="+"
if(opration=="+"){
  console.log(num1+num2)
  
}
if else(opration=="-"){
  
  console.log(num1-num2)
}
if else(opration=="*"){
  
  console.log(num1*num2)
  
}
if else(opration=="/"){
  
  console.log(num1/num2)
}else{
  console.log("not valid opration")
}

60.
var day=3;
 switch (day) {
   case 1:
   console.log("sunday")
     break;
   
   case 2:
     console.log("monday")
     break;
     case 3:
       console.log("Tuesday")
       break;
       case 4:
         console.log("Wednesday")
         case 5:
         break;
         console.log("Thursday")
         break;
         case 6:
           console.log("friday")
           case 7:
             console.log("saturday")
             
             break;
 }


 62.
 var number=16
 var operation=3
 switch (operation) {
   case 1:
console.log(number**2)
     break;
   case 2:
     console.log(number**3)
     break
     case 3:
       console.log(number**0.5)
   
 }

 64.
 function sumofnumber(n){
   
    if (n===0){
      return 0
    }
    
     return n+sumofnumber(n-1)
     }
     var n=10
     console.log(sumofnumber(n))
     
     
     