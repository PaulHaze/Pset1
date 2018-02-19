#include <cs50.h>
#include <stdio.h>

void spaces(int n);
void hashes(int n);
void pyramid();

int main(void)

{
    pyramid();
}


void spaces(int n)
{
    for (int i = 0; i < n; i++)
    {
    printf(" ");
    }
}

void hashes(int n)
{
    for (int i = 0; i < n; i++)
    {
    printf("#");
    }
}

void pyramid()
{
    int x = 2;
    int y = 5 - 1;
    
    for (int i = 5; i > 0; i--)
    {
    spaces(y);
    hashes(x);
    printf("\n");
    x++;
    y--;
    }
}
