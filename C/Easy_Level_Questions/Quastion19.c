
// 19. Check if the array arr = [1, 2, 3, 4, 5] is sorted in ascending order, and print true or false.





#include <stdio.h>
int main()
{
   int arr[]={1,2,3,4,5};
   int len=sizeof(arr)/sizeof(arr[0]);
   int count=0;
   for(int i=0;i<len-1;i++){
     if(arr[i]<arr[i+1]){
       count++;
     }
   }
   if(count==len-1){
     printf("true");
   }else{
     printf("false");
   }
}