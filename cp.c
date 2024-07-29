#include <stdio.h>
#include <stdint.h>

typedef uint8_t by;

int main(int argc, char *argv[])
{
    FILE *src = fopen(argv[1], "rb");
    FILE *dst = fopen(argv[2], "wb");

    by b;

    while (fread(&b, ))
}
