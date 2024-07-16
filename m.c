#include <cs50.h>
#include <stdio.h>

int h(int num);
int main (void)
{
     int n = get_int("Height: ");
     printf(h(n));
}

void h(int num)
{
    for(int i = 0; i < num; i++)
    {
        for(int j = 0; j < num; j++)
        {
            printf("#\n");
        }

        printf("\n");
    }
}

