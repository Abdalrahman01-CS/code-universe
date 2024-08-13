#include "helpers.h"
#include <math.h>

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    for(int i = 0;i<height; i++)
    {
        for(int j = 0;j<width; j++)
        {
            int avg_rgb=round(image[i][j].rgbtRed+image[i][j].rgbtGreen+image[i][j].rgbtBlue) / (float) 3;
            image[i][j].rgbtRed=image[i][j].rgbtGreen=image[i][j].rgbtBlue=avg_rgb;

        }
    }
    return;
}

// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
{
    int sepiaRed, sepiaGreen,sepiaBlue;
    for(int i = 0;i<height; i++)
    {
        for(int j = 0;j<width; j++)
        {
            sepiaRed=0.393*image[i][j].rgbtRed+0.769*image[i][j].rgbtGreen+0.189*image[i][j].rgbtBlue;
            sepiaGreen=0.349*image[i][j].rgbtRed+0.686*image[i][j].rgbtGreen+0.168*image[i][j].rgbtBlue;
            sepiaBlue=0.272*image[i][j].rgbtRed+0.534*image[i][j].rgbtGreen+0.131*image[i][j].rgbtBlue;
            if(sepiaRed>255)
            {
                sepiaRed=255;
            }
          else  if(sepiaGreen>255)
            {
                sepiaGreen=255;
            }
         else   if(sepiaBlue>255)
            {
                sepiaBlue=255;
            }

            image[i][j].rgbtRed=sepiaRed;
            image[i][j].rgbtGreen=sepiaGreen;
            image[i][j].rgbtBlue=sepiaBlue;

        }
    }
    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}
