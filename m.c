#include <cs50.h>
#include <stdio.h>

void h(int num);
int main (void)
{
     int n = get_int("Height: ");
     h(n);
}

void h(int num)
{
    for(int i = 0; i < num; i++)
    {
        for(int j = 0; j < num; j++)
        {
            printf("#");
        }

        printf("\n");
    }
}

