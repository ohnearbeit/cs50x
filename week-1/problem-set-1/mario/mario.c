#include <cs50.h>
#include <stdio.h>

int main(void) 
{
    // Prompt the user for a height from 1 to 8
    int height;
    do
    {
        height = get_int("Height: ");
    } while (height < 1 || height > 8);

    for (int i = 0; i < height; i++)
    {
        // Pad left side with spaces
        for (int n = 1; n < height - i; n++)
        {
                printf(" ");
        }

        // Print blocks
        for (int j = 0; j < i + 1; j++)
        {
                printf("#");
        }
        
        printf("\n");
    }
}