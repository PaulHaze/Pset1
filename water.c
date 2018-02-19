#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("Minutes: ");
    int time = get_int();
    printf("Bottles: %i\n", time * 12);
}