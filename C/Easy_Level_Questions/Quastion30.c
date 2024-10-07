// 30. Write a program to input an integer 'n' and print the sum of all its even digits and the sum of all its odd digits separately. Example : Input: 'n' = 132456, Output: 12, 9
// Explanation:
// The sum of even digits = 2 + 4 + 6 = 12
// The sum of odd digits = 1 + 3 + 5 = 9


  #include <stdio.h>
#include <string.h>

int main()
{
   
  char str[100]="132456";
  int len= strlen(str);
  int evensum=0;
  int oddsum=0;
   for(int i=0;i<len;i++){
       int num=str[i]-'0';
       if(num%2==0){
           evensum=evensum+num;
           
       }else{
           oddsum=oddsum+num;
       }
   }
       printf("%d\n",evensum);
       printf("%d",oddsum);
}