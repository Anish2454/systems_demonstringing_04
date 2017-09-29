#include <stdio.h>
#include <string.h>

/*
  strchr() takes in a String (char array) and a character
  It then returns a pointer to the FIRST occurrence of that character
  in the String.
  It return NULL if the string is not found
*/
void strchr_demo(){
  //Find The first "o" in "Hello World"
  char * str1 = "Hello World!";
  char x1 = 'o';

  //Find The first "y" in "Stuyvesant"
  char * str2 = "Stuyvesant";
  char x2 = 'y';

  //Find The first "x" in "Chambers"
  char * str3 = "Chambers";
  char x3 = 'o';


  printf("\nThe string after [%c] in [%s] is [%s]\n", x1, str1, strchr(str1, x1));
  printf("The string after [%c] in [%s] is [%s]\n", x2, str2, strchr(str2, x2));
  printf("The string after [%c] in [%s] is [%s]\n", x3, str3, strchr(str3, x3));
}

/*
  strstr() takes in two Strings (char arrays)
  It then returns the first occurrence of the
  second string in the first string.
  If the second string is not a substring of the first,
  then NULL will be returned.
*/
void strstr_demo(){
  //Find The first "Hello" in "Hello World"
  char * str1 = "Hello World!";
  char * sub1 = "Hello";

  //Find The first "y" in "Stuyvesant"
  char * str2 = "Stuyvesant";
  char * sub2 = "ves";

  //Find The first "x" in "Chambers"
  char * str3 = "Chambers";
  char * sub3 = "Anish";

  printf("\nThe string after [%s] in [%s] is [%s]\n", sub1, str1, strstr(str1, sub1));
  printf("The string after [%s] in [%s] is [%s]\n", sub2, str2, strstr(str2, sub2));
  printf("The string after [%s] in [%s] is [%s]\n\n", sub3, str3, strstr(str3, sub3));
}

int main(){
  strchr_demo();
  strstr_demo();
}
