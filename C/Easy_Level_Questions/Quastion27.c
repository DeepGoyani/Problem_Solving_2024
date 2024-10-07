// 27. Write a program to extract the file extension from a given filename.Example: Input: "document.pdf", Output: "pdf".


    #include <stdio.h>
#include<string.h>

int main()
{
   
   char str[100]="document.pdf";
   int len=strlen(str);
   int count=0;
   char new[9]="";
   for(int i=0;i<len;i++){
       if(str[i]=='.'){
           count=i;
           
       }
       
   }
   for(int i=count+1;i<len;i++){
       new[0]=str[i];
       printf("%s",new);
   }


}