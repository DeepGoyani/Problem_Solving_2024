// 17. Count how many positive and negative numbers are in arr = [1, -2, 3, -4, 5, -6] and print the result.

#include <stdio.h>
int main()
{
 
    int arr[]={1, -2, 3, -4, 5, -6};
    int evencount=0;
    int oddcount=0;
    int len =sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<len;i++){
      if(arr[i]>0){
        evencount++;
      }else{
        oddcount++;
      }
    }
    printf("EvenCount: %d\n",evencount);
    printf("OddCount: %d",oddcount);

}