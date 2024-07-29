#include <cs50.h>
#include <stdio.h>
#include <stdio.h>

int main(void)
{
    FILE *file = fopen("phonebook.csv", "a");

    char *name = get_string("Name: ");
    char *number = get_string("Number: ");

    fprint(file, "%s,%s\n", name, number);

    fclose(file);
}
