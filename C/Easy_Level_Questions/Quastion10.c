// 10. Given an array of integers, count how many numbers are even and how many are odd.
// Example
// Input: [1, 2, 3, 4, 5]
// Output: Even: 2, Odd: 3


#include <stdio.h>
#include<string.h>
int main() {
 int arr[]={1,2,3,4,5};
 int evencount=0;
 int oddcount=0;
 int len=sizeof(arr)/sizeof(arr[0]);
 for(int i=0;i<len;i++){
   if(arr[i]%2==0){
     evencount++;
   }else{
     oddcount++;
   }
 }
 printf("even: %d\n",evencount);
 printf("odd: %d",oddcount);
}
