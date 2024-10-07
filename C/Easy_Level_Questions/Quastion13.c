// 13. Check if the array 
// arr = [1, 2, 3, 4, 5] contains the number 3 and print true or false.


#include <stdio.h>
#include<string.h>
int main() {
 int arr[]={1,2,3,4,5};
 int number =3;
 int count=0;
 int len =sizeof(arr)/sizeof(arr[0]);
 for(int i=0;i<len;i++){
   if(arr[i]==number){
     count++;
     
 }
 }
  if(count>0){
     printf("true");
     
   }else{
     printf("false");
   }
}

