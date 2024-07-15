#include <cs50.h>
#include <stdio.h>
int main(void)
{
    int n;
    do
    {
          n = get_int("height: ");
    }
    while (n < 1 || n > 8);

    for(int i = 0; i < n; i++)
    {
        for(int k = 0; k < i; k++)
        {
            printf(" ");
        }
        for(int j = 0; j <= n; j++)
        {
            printf("#");
        }
         printf("\n");
    }
}
