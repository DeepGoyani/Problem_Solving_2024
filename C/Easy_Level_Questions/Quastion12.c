// 12. Add the number 6 to the end of the array 
// arr = [1, 2, 3, 4, 5] and print the updated array.

#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
   int new_arr[n+1];
   for(int i=0;i<n;i++){
     new_arr[i]=arr[i];
   }
   new_arr[n]=6;
   for(int i=0;i<=n;i++){
     printf("%d",new_arr[i]);
   }
}
