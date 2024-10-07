// 22. Write a program to find the length of a given string.


#include <stdio.h>
int main()
{
   
    char str[]="hello world";
    int count=0;
    int i=0;
    while(str[i]!='\0'){
      count++;
     
      i++;
    }
    
   printf("%d",count); 

}