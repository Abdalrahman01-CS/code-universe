#include <cs50.h>
#include <stdio.h>

int number(int num);
int main (void)
{
     int n = get_int("Height: ");
     number(n);
}

void number(int num)
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

