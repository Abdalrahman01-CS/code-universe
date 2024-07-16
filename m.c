#include <cs50.h>
#include <stdio.h>

void h(int space , int num);
int main (void)
{
     int n = get_int("Height: ");
     for(int i = 0; i < n; i++)
     {

        h(i + 1);
     }

}

void h(int space , int num)
{
    for(int i = 0; i < num; i++)
    {
            printf("#");

            for(int space = 0; space < i; space++)
            {
                printf(" ");
            }
    }

        printf("\n");
}

