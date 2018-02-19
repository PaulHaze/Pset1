#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    float change;
    
    do
    {
    printf("Oh hai! How much change is owed?\n");
    change = get_float();
    }
    while (change < 0);
    
    printf("%.2f\n", change);
    
    
    //int totalCents = change * 100
    
    //printf("change amount in cents = %i\n", totalCents)
    
    int quarts = change / 0.25;
    float remainderFirst = change - (quarts * 0.25);
    
    
    int dimes = remainderFirst / 0.1;
    float remainderSecond = remainderFirst - (dimes * 0.1);
    
    
    int nickels = remainderSecond / 0.05;
    float remainderThird = remainderSecond - (nickels * 0.05);
    
    
    float cents = remainderThird * 100;
    float centsRounded = roundf(cents * 100) / 100;
    
    int coinTotal = quarts + nickels + dimes + centsRounded;
    printf("%i\n", coinTotal);
    
}