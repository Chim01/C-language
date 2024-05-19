#include<stdio.h>
#include<stdbool.h> // Boolean isn't a built in unction in C, s0o there is need to import it if we want to use it. we import bool function using #include<stdboo.h>

int main(){
    bool is_praying_good= true;
    printf("%d \n", is_praying_good);

    bool is_cold=false;
    bool is_hot= false;
    if (is_cold==true)
    {
        printf("It's a cold day \n");
        printf("Wear warm clothes \n");
    }
    else if (is_hot!=true)
    {
        printf("It's a hot day \n");
        printf("Drink a lot of water \n");
    }
    else
    {
        printf("It's a lovely day \n");
    }
    printf("Stay Blessed \n");

    // Ternary operator
    int time = 20;
    (time < 18) ? printf("Good day. \n") : printf("Good evening. \n");

    // Switch (Alternative to if statement)
    int Dice;
    printf("Enter Dice number:");
    scanf("%d", &Dice);
    switch (Dice)
    {
    case 6:
        printf("Yatzy! \n");
        break;
    default:
        printf("No yatzy \n \t");
        break;
    }

    // While Loop
    int y=0;
    while (y<5)
    {
        printf("%d \n",y);
        y++;
    }

    // DO While
    int x=10;
    do {
    printf("%d\n", x);
    x--;
    }
    while (x > 5);
    
    // For Loop
    int number;
    for (number=11; number<=20; number++)
    {
        printf("%d \n", number);
    }
    
    // Nested loop
    int i, j;
    // Outer loop
    for (i = 1; i <= 2; ++i) {
    printf("Outer: %d\n", i);  // Executes 2 times

    // Inner loop
    for (j = 1; j <= 3; ++j) {
        printf(" Inner: %d\n", j);  // Executes 6 times (2 * 3)
    } 
    }

    // Array and loop through an array
    int Numbers[]={10,20,30,40};
        Numbers[0]=50;
    int length= (sizeof Numbers)/(sizeof Numbers[0]);
    printf("%d \n",length);
    int lp;
    for ( lp= 0; lp < length; lp++)
    {
        printf("%d \n",Numbers[lp]);
    }
    
    // Average(Sum of numbers/numbers of items)
    int age[]={5,7,9,11,13,15,17,19,21};
    int len=(sizeof age)/(sizeof age[0]);
    int sum,A;
    float average;
    for (A= 0; A < len; A++)
    {
       sum+=age[A];
    }
    average=sum/len;
    printf("%.2f \n",average);

}