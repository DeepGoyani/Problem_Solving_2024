// 21. Write a program to convert a given string to uppercase.Example: Input: "hello", Output: "HELLO".


#include <stdio.h>


int main()
{
    char str[]="hello world";
    int len=strlen(str);
    char upercase[]=" ";
    int i=0;
    while(str[i]){
      upercase[i]=toupper(str[i]);
     
      i++;
    }
     printf("%s",upercase);
    
    
}