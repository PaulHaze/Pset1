#include <cs50.h>
#include <stdio.h>
#include <math.h>



int main(void)
{
    float change;
    int cents;
    int coinTotal = 0;
   
    
    do
    {
    printf("Oh hai! How much change is owed?\n");
    change = get_float();
    }
    while (change <= 0);
    
    printf("%f\n", change);
    
    change = change * 100;
    float changeRounded = roundf(change);
    printf("rounded %f\n", changeRounded);
    
    
    cents = changeRounded;
    
    printf("cents %i\n", cents);
    
    

    for (int i = 0; cents > 0; i++)
    {
    
    if (cents > 24)
    {
    do 
    {
    cents = cents - 25;
    coinTotal ++; 
    printf("quarters = %i, remaining %i\n", coinTotal, cents);
    }
    while (cents > 24);
    }
    
    if (cents > 9)
    {
    do 
    {
    cents = cents - 10;
    coinTotal ++;
    printf("dimes = %i, remaining %i\n", coinTotal, cents);
    }
    while (cents >= 10);
    }
    
    if (cents > 4)
    {
    do
    {
    cents = cents - 5;
    coinTotal++;
    }
    while (cents > 4);
    }
    
    if (cents > 0)
    {
    do
    {
    cents = cents - 1;
    coinTotal++;
    }
    while (cents > 0);
    }
    }
     printf("%i\n", coinTotal);
        
    
}

