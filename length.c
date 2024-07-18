#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string name = get_string("Name: ");

    int n = 1;
    while (name[n] != '\0')
    {
        n++;
    }
    printf("%i\n", n);
}
