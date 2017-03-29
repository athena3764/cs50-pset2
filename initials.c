#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/*Implement a program that, given a person’s name, prints a person’s initials, per the below.*/

int main(void){
  string name;
  name = GetString();
  
  //Print the first letter in the first name.
  printf("%c", toupper(name[0]));
  for (int i = 0; i<strlen(name);i++){
    
    //Print the first letters in the middle and/or last names.
    if (name[i]== ' '){
      printf("%c", toupper(name[i+1]));
    }
  }
  printf("\n");
}
