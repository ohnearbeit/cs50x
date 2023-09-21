#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt for start size
    int start;
    do
    {
        start = get_int("Starting size: ");
    } while (start < 9);

    // Prompt for end size
    int end;
    do
    {
        end = get_int("Ending size: ");
        
    } while (end < start);

    // Calculate number of years until we reach threshold
    // Each year, n / 3 new llamas are born, and n / 4 llamas pass away.
    int years = 0;
    do
    {
        start = start + (start / 3) - (start / 4);
        years++;
    } while (start < end);

    // Print number of years
    printf("Years: %i\n", years);
}
