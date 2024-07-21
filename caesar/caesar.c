#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./caesar KEY");
        return 1;
    }

    for (int i = 0, n = strlen(argv[1]); i < n; i++)
    {
        if (!(isdigit(argv[1][i])))
        {
            printf("Usage: ./caesar KEY");
            return 1;
        }

        int knum = atoi(argv[1]);
        string plaintext = get_string("Plaintext: ");
        printf("Ciphertext: ");

        for (int j = 0, m = strlen(plaintext); j < m; j++)
        {
            printf(("%c", plaintext[j] - 65 + knum) % 26 + 65);
        }
    }

}
