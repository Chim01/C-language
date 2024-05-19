#include <stdio.h>

int main() {
  int age=17; //(%d is for printing integer)
  float num=99.99; //(%f is for printing float)
  double number=33.2; //(%lf is used for printing double)
  char letter='A'; //(%c is for printing character)
  char name[]="David"; //(Char is converted to string with the use of[]. %s is for printing string)

  printf("Hello World!\n \\");
  printf("My name is Okoroji Chimbueze David.\nI'm a student of ABUAD \n");
  printf(" \"Learning C language is fun\" \n");
  printf("%d \n", age);
  printf("%.2f \n", num);
  printf("%.1lf \n", number);
  printf("%c \n", letter);
  printf("%s \n", name);
  printf("I'm %d years old.\n My grades are all %c.\n I've got %f in exams", age,letter,num);
  // Determining memeory size
  int myInt;
  float myFloat;
  double myDouble;
  char myChar;

  printf("%lu \n", sizeof(myInt));
  printf("%lu \n", sizeof(myFloat));
  printf("%lu \n", sizeof(myDouble));
  printf("%lu \n", sizeof(myChar));
  return 0;
}