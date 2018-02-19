#include <cs50.h>
#include <stdio.h>

void spaces(int n);
void hashes(int n);

int main(void)
{
   int h;
   
   do
    {
    printf("Height: ");
    h = get_int();
    
    }
    while (h<0 || h>=24);
 

    
    int x = 2;
    int y = h - 1;
    
    for (int i = h; i > 0; i--)
    {
    spaces(y);
    hashes(x);
    printf("\n");
    x++;
    y--;
    }
  
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
