#include<stdio.h>
#include<stdbool.h>
#include<string.h>

int main(){

    // Strings
    char greetings[]="Hello dear!";
    printf("%s \n",greetings);
    printf("%c \n",greetings[0]);
    greetings[0]='J';
    printf("%s \n",greetings);

    // Looping through a string
    char car_name[]="Volvo";
    int q;
    for (q= 0; q < 6; ++q){
        printf("%c \n",car_name[q]);
    }
    
    // Example on string
    char message[]="Good to see you";
    char fname[]="David";
    printf("%s %s! \n", message,fname);
    
    //String length
    char alphabet[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("%d alphabets \n", strlen(alphabet));
    printf("%d \n",sizeof(alphabet));

    //String concatenation
    char name[20]="David ";
    char constant[]="loves God";
    strcat(name,constant);
    printf("%s\n",name);
    
    //Copy string
    char str1[20]="I LOVE JESUS";
    char str2[20]= "";
    strcpy(str2,str1);
    printf("%s",str2);

    //String comparison
    char str1[] = "Hello";
    char str2[] = "Hello";
    char str3[] = "Hi";

    // Compare str1 and str2, and print the result
    printf("%d\n", strcmp(str1, str2));  // Returns 0 (the strings are equal)

    // Compare str1 and str3, and print the result
    printf("%d\n", strcmp(str1, str3));  // Returns -4 (the strings are not equal)

    //
}