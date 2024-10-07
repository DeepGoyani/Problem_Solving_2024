10. Given an array of integers, count how many numbers are even and how many are odd.
Example
Input: [1, 2, 3, 4, 5]
Output: Even: 2, Odd: 3


var number= [1, 2, 3, 4, 5]
 var even=0
 var odd=0
 for(i=0;i<number.length;i++){
    if(number[i]/2==0){
        even++
    }else{
        odd++
    }

 }
 console.log("Even:" even)
 console.log("Odd" odd)