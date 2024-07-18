#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = get_string("Before: ");
    printf("After:  ");
    int length = strlen(s);
    for (int i = 0, n = length; i < n; i++)
    {
            s[i] = toupper(s[i]);
            printf("%c", s[i]);
    }
    printf("\n");
}
