// 18. Print all elements that are at even indexes in the array arr = [10, 20, 30, 40, 50].


#include <stdio.h>
int main()
{
 
    int  arr[]={10, 20, 30, 40, 50};
    int len=sizeof(arr)/sizeof(arr[0]);
    
for(int  i=1;i<len;i=i+2){
  printf("%d\n",arr[i]);
}
}