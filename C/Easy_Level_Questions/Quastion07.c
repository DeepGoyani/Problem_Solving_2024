// 7. Write a function that simulates a traffic light system. The function should take the current light color (red, yellow, green) as input and print the corresponding action:
// "red" → "Stop"
// "yellow" → "Slow down"
// "green" → "Go"



#include <stdio.h>
#include<string.h>
int main() {
  char light_color[100]="green";
  
 if(strcmp(light_color,"red")==0){
 printf("Stop");
}
 else if(strcmp(light_color , "yellow") ==0){
  printf("Slow down");
} else if(strcmp(light_color,"green")==0){
  printf("Go");
}else{
  printf("color is not match with traffic light color");
}

}