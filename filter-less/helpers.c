#include "helpers.h"
#include <math.h>

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    for(int i = 0;i<height; i++)
    {
        for(int j = 0;j<width; j++)
        {
            int avg_rgb=round(image[i][j].rgbtRed+image[i][j].rgbtGreen+image[i][j].rgbtBlue) / 3.0;
            image[i][j].rgbtRed=image[i][j].rgbtGreen=image[i][j].rgbtBlue=avg_rgb;

        }
    }
    return;
}

// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
{
    float sepiaRed, sepiaGreen,sepiaBlue;
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
             if(sepiaGreen>255)
            {
                sepiaGreen=255;
            }
             if(sepiaBlue>255)
            {
                sepiaBlue=255;
            }

            image[i][j].rgbtRed=round(sepiaRed);
            image[i][j].rgbtGreen=round(sepiaGreen);
            image[i][j].rgbtBlue=round(sepiaBlue);

        }
    }
    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    RGBTRIPLE temp;
    for(int i = 0;i<height; i++)
    {
        for(int j = 0;j<width/2; j++)
        {
temp=image[i][j];
image[i][j]=image[i][width-j-1];
image[i][width-j-1] = temp;

        }
    }
    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    RGBTRIPLE image_replica[height][width];
     for(int i = 0;i<height; i++)
    {


        for(int j = 0;j<width; j++)
        {
            float n=0;
            float sr=n,sg=n,sb=n,tp=n;

            for(int up_dated_i=i-1; up_dated_i < i+2;  up_dated_i++)
            {
                for(int up_dated_j=j-1;   up_dated_j < j+2;  up_dated_j++)
                {
                    if(up_dated_i>=0&&up_dated_j>=0&&up_dated_i<height&&up_dated_j<width)
                    {
                         sr+=image[up_dated_i][up_dated_j].rgbtRed;
                         sg+=image[up_dated_i][up_dated_j].rgbtGreen;
                         sb+=image[up_dated_i][up_dated_j].rgbtBlue;
                         tp++;
                    }

                }
            }
            image_replica[i][j].rgbtRed=round(sr/tp);
            image_replica[i][j].rgbtGreen=round(sg/tp);
            image_replica[i][j].rgbtBlue=round(sb/tp);

        }
    }
    for(int i = 0;i<height; i++)
    {
        for(int j = 0;j<width/2; j++)
        {
            image[i][j]=image_replica[i][j];
        }
    }
    return;
}
