// 1. Write a function to check the grade of a student based on the score:
// 90-100: A
// 80-89: B
// 70-79: C
// 60-69: D
// Below 60: F



#include <stdio.h>
 #include <string.h>
int main(){

int marks=85;

if(marks>=90 && marks<=100){
printf("A grade");
}else if(marks<=89 && marks>=80){
  printf("B grade");
}else if(marks<=79&& marks>=70){
  printf("c grade");
}else if(marks<=69 && marks>=60){
  printf("D grade");
}else if(marks<60){
  printf("fail");
}else{
  printf("not valid marks");
}

}
