// 31. Write a program to repeat a string a specified number of times.
// Example: Input: ("hello", 3), Output: "hellohellohello".


var str="hello"
var repeat=3 
var out=" "
for(i=1;i<=repeat;i++){
  for(j=0;j<str.length;j++){
    out=out+str[j]
  }
}
console.log(out)