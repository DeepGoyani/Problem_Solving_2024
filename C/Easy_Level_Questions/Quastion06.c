// 6. Write a function that checks if a username and password match predefined values. If the username is "admin" and the password is "1234", print "Login successful"; otherwise, print "Login failed."


#include <stdio.h>
#include<string.h>
int main() {
 
char username[]="admin";
char pass[]="1234";
if(strcmp(username ,"admin")==0 && strcmp(pass,"1234")==0){
  printf("true");
}else{
  printf("false");
}
  
}