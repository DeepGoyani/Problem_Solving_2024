16. Check if all the elements in 
arr = [3, 5, 9, 1, 7] are positive numbers, and print true or false.


var arr= [3, 5, 9, 1, 7]
var count=0

for(i=0;i<arr.length;i++){
    if(arr[i]>=0){
        count++
    }
}
if(count>0){
    console.log("Positive Number")
}else{
    console.log("Nagative Number")
}