// 16. Check if all the elements in arr = [3, 5, 9, 1, 7] are positive numbers, and print true or false.

#include <stdio.h>
int main()
{
 
    int arr[]={3, 5, 9, 1, 7};
    int len=sizeof(arr)/sizeof(arr[0]);
    int count=0;
    for (int i=0;i<len;i++){
    if(arr[i]<0){
      count++;
    }
      
    }
    if(count==0){
      printf("positive");
    }else{
      printf("nagative");
    }
    

}
