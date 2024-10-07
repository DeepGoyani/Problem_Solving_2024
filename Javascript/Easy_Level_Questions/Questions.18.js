18. Print all elements that are at even indexes in the array 
arr = [10, 20, 30, 40, 50].

var arr=[10,20,30,40,50]

var arr1=[]
for(i=1;i<arr.length;i=i+2){
 arr1.push(arr[i])
}
console.log(arr1)