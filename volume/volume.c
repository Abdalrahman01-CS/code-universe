// Modifies the volume of an audio file
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

// Number of bytes in .wav header
const int h = 44;

uint8_t bu[h];
uint16_t b;

int main(int argc, char *argv[])
{
    // Check command-line arguments
    if (argc != 4)
    {
        printf("Usage: ./volume input.wav output.wav factor\n");
        return 1;
    }

    // Open files and determine scaling factor
    FILE *input = fopen(argv[1], "r");
    if (input == NULL)
    {
        printf("Could not open file.\n");
        return 1;
    }

    FILE *output = fopen(argv[2], "w");
    if (output == NULL)
    {
        printf("Could not open file.\n");
        return 1;
    }

    float factor = atof(argv[3]);

    // TODO: Copy header from input file to output file
    fread(bu, sizeof(uint8_t), h, input);
    fwrite(bu, sizeof(uint8_t), h, output);

    // TODO: Read samples from input file and write updated data to output file
    while (fread(&b, sizeof(uint16_t), 1, input) == 1)
    {
        b *= factor;
        fwrite(&b, sizeof(uint16_t), 1, output);
    }

    // Close files
    fclose(input);
    fclose(output);
}
