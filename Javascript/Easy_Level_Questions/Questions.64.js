// 64.Write a recursive function to calculate the sum of the first n natural numbers. The sum of the first n numbers is given by:sum(n)=n+sum(n−1)
// Example:
// Input: n = 5
// Output: 15
// Explanation: 1+2+3+4+5=15




function sumofnumber(n){
   
    if (n===0){
      return 0
    }
    
     return n+sumofnumber(n-1)
     }
     var n=5
     console.log(sumofnumber(n))
     
     
     