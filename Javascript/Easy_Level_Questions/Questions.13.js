13. Check if the array 
arr = [1, 2, 3, 4, 5] contains the number 3 and print true or false.

var arr=[1, 2, 3, 4, 5]
var number="3"
count=0
for(i=0;i<arr.length;i++){
    if(arr[i]==number){
       count+=1
}
}
if(count>0){
    console.log("True")
}else{
    console.log("False")
}