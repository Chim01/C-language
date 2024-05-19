#include<stdio.h>

int main(){
    int a= 10;
    int b= 12;
    int sum= a+b;
    printf("%d \n",sum);

    int length=4;
    int width=6;
    int area;
    area= length*width;
    printf("Length: %d\n", length);
    printf("Width: %d\n", width);
    printf("Area: %d\n", area);


    int item=50;
    float cost_per_item=9.99;
    float total_cost= item*cost_per_item;
    char currency='$';

    printf("Number of items: %d \n", item);
    printf("Cost per item: %c %f \n", currency,cost_per_item);
    printf("Total cost= %c %.2f \n",currency,total_cost);
}