// 33. Write a program that takes a year as input and checks whether it is a century year (a year divisible by 100).



   #include <stdio.h>
#include <string.h>

int main()
{
   
int year;
scanf("%d",&year);
if(year%100==0){
    printf("It Is Century Year");
}
else{
    printf("not Century Year");
}

}