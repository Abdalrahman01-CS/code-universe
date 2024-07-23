#include <cs50.h>
#include <stdio.h>
#include <string.h>

type struct
{
    string name;
    string number;
}
person;

int main(void)
{
      person people[3];

     string name = get_string("Name: ");
     for (int i = 0; i < 3; i++)
     {
          if (strcmp(people[i].name, name) == 0)
          {
            printf("Found %s\n", people[i].number);
            return 0;
          }
     }
     printf("Not found\n");
            return 1;
}
