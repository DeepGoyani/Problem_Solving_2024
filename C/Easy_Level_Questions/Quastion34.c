// 34. Access and print the first and last element of the array arr = [10, 20, 30, 40, 50].


   #include <stdio.h>
#include <string.h>

int main()
{
   
int arr[]={10,20,30,40,50};
int len=sizeof(arr)/sizeof(arr[0]);
printf("%d\n",arr[0]);
printf("%d",arr[len-1]);

}
