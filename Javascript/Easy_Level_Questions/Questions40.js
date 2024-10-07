// 40. Given two numbers, generate an array containing all numbers between them (inclusive). Example: Input: 1,5 Output: [1, 2, 3, 4, 5]

var start=[1,5]

var arr=[]
for(i=start[0];i<=start[1];i++){
  arr.push(i)
}
console.log(arr)


50.
var str="hello world"
var char="o"
var count=0
for(i=0;i<str.length;i++){
  if(str[i]=="o")
  count++
}
console.log(count)