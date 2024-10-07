// 3. Write a function that takes three sides of a triangle and checks whether the triangle is equilateral, isosceles, or scalene.



#include <stdio.h>
#include <string.h>
int main() {

    int side1=10;
    int side2=12;
    int side3=10;
  
      if(side1+side2>side3 && side2+side3>side1 && side1+side3>side2){
        if(side1==side2 && side2==side3){
            printf("Equailaterl");
        }else if(side1==side2 || side2==side3 || side1==side3){
printf("isosceles");
        }else{
            printf("scalene");
        }
      }
}