// 23. Write a program to concatenate two given strings. Example: Input: ("hello", " world"), Output: "hello world".


#include <stdio.h>
int main()
{
   
    char str1[20]="hello";
    char str2[]=" world";
    
    strcat(str1,str2);
    printf("%s",str1);
}