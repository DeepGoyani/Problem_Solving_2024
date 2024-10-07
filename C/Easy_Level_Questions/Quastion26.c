// 26. Write a program to check if a string ends with a specific character.Example: Input: ("codinggita", "a"), Output: true.

#include <stdio.h>
#include<string.h>

int main()
{
   
   char str[10]="codinggita";
   int len=strlen(str);
   if(str[len-1]=='a'){
       printf("TRUE");
   }else{
       printf("FALSE");
   }

}