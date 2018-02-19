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
    
    int totalCents = change * 100;
    printf("total cents %i\n", totalCents);
    
    
    int quarts = change / 0.25;
    float remainderFirst = change - (quarts * 0.25);
    printf("total quarters are: %i\n", quarts);
    printf("Amount remainining is: %.2f\n", remainderFirst);
    
    int dimes = remainderFirst / 0.1;
    float remainderSecond = remainderFirst - (dimes * 0.1);
    printf("total dimes are: %i\n", dimes);
    printf("Amount remaining is: %.2f\n", remainderSecond);
    
    int nickels = remainderSecond / 0.05;
    float remainderThird = remainderSecond - (nickels * 0.05);
    printf("Total nickels are: %i\n", nickels);
    printf("Amount remaining is: %.2f\n", remainderThird);
    
    float cents = remainderThird * 100;
    float centsRounded = roundf(cents * 100) / 100;
    
    printf("Total cents are %.0f\n", centsRounded);
    
    int coinTotal = quarts + nickels + dimes + centsRounded;
    printf("Total amount of coins returned = %i\n", coinTotal);
    
}
