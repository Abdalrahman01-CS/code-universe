#include <cs50.h>
#include <stdio.h>

void print_coulmn(int height);

int main(void)
{
    int n = get_int("Height: ");
    print_coulmn(n);

}

void print_coulmn(int height)
{
    for (int i = 0; i < height; i++)
    {
        printf("#\n");
    }

}
