// 46. Given a string, return the index of the first repeating character. If no character repeats, return -1.
// Input: "hello"
// Output: 2 (because 'l' repeats first)
// Input: "abcdef"
// Output: -1


var str="hello"
for(i=0;i<str.length;i++){
  for(j=i+1;j<str.length;j++){
    if(str[i]==str[j]){
      console.log(i)
    }
  }
}



