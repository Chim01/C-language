#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main(){
     // Data declearation
    int number_of_volatge_source;
    int number_of_resistors;
    float v1;
    float v2;


    // kirchhoff's law
    printf("Kirchhoff's law \n");

    // number of voltage source
    printf("How many voltage source is present in the circuit:");
    scanf("%d",& number_of_volatge_source);

    // conditions for execution
    if (number_of_volatge_source=1)
    {
        printf("Enter the value for v1:");
        scanf("%.2f",& v1);
    }
    else if (number_of_volatge_source=2)
    {
        printf("Enter the value for v1:");
        scanf("%.2f",& v1);
        printf("Enter the value for v2:");
        scanf("%.2f",& v2);
    }
    
    
        
}