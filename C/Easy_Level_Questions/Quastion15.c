19..
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

20.
#include <stdio.h>
int main()
{
  int arr[]={80,30,70,50};
  int min=arr[0];
  int max=arr[0];
  int len=sizeof(arr)/sizeof(arr[0]);
  int diff=0;
  for(int i=0;i<len;i++){
    if(min>arr[i]){
      min=arr[i];
    }
    if(max<arr[i]){
      max=arr[i];
    }
  }
  diff=max-min;
  printf("%d",diff);
}