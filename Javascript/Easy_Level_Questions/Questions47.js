47.

var arr=[10, 5, 3, 4, 3, 5, 6]
 

for(i=0;i<arr.length;i++){
  for(j=i+1;j<arr.length;j++){
    if(arr[i]==arr[j]){
      console.log(arr[i])
     
    }
  }
}
