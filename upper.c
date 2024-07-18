#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = get_string("Before: ");
    printf("After:  ");
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = toupper(s[i]);
            printf("%c", s[i]);
        }
        else
        {
            printf("%c", s[i]);
        }
    }
    printf("\n");
}
