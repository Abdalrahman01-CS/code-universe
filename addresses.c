#include <stdio.h>

int main(void)
{
    int n = 50;
    int *a = &n;
    printf("%p\n", &n);
    printf("%p\n", a);

}
