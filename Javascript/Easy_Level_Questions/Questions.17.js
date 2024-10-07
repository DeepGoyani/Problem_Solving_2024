17. Count how many positive and negative numbers are in 
arr = [1, -2, 3, -4, 5, -6] and print the result.

var arr = [1, -2, 3, -4, 5, -6]
positive_count=0
negative_count=0
for(i=0;i<arr.length;i++){
if(arr[i]>=0){
    positive_count++
}else{
    negative_count++
}
}
console.log(`positive_count: ${positive_count}`)
console.log(`nagative_count: ${nagative_count}`)