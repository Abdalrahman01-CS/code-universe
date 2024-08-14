#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        return 1
    }
    FILE *raw_f = fopen(argv[1], "r");
    uint_8 buffer[512];
    while(fread(buffer,1,512,raw_f))
    {
        
    }
}
