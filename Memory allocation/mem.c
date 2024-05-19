#include<stdio.h>
#include<stdlib.h>
int main(){
    int n, i; // Declearing variables
    int * ptr; // Declearing pointer

    //Getting user input
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Number of elements = %d \n", n);
    
    ptr= (int*) malloc(n* sizeof(int));

}