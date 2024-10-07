// 27. Write a program to extract the file extension from a given filename.
// Example: Input: "document.pdf", Output: "pdf".


var str="document.pdf"
var ind=str.indexOf(".")
var ext=""
for(i=ind+1;i<str.length;i++){
  ext+=str[i]
}
console.log(ext)
