// 35. Print an inverted right-angled triangle pattern with n rows.

   #include <stdio.h>
#include <string.h>

int main()
{int row;
scanf("%d",&row);
    
   for(int i=0;i<=row;i++){
       for(int j=0;j<i;j++){
           printf("*");
       }
       printf("\n");
   }
}