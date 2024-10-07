// 31. Write a program to repeat a string a specified number of times.
// Example: Input: ("hello", 3), Output: "hellohellohello".


#include <stdio.h>
int main()
{
   char str[100]="hello";
   int len=strlen(str);
   int repeat=3;
   for(int i=1;i<=repeat;i++){
     for(int j=0;j<len;j++){
       printf("%c",str[j]);
     }
   }
}