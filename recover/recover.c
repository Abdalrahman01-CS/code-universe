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
    bool  found_jpeg; //false
    while(fread(buffer,1,512,raw_f))
    {
        if(buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff && (buffer[3] & 0xf0) == 0xe0)
        {
            found_jpeg = true;
        }
        else //delete
        {
            found_jpeg = false;
        }
    }
}
