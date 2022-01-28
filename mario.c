#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Ask For Height (will make it go again)
    int n;
    do
    {
        n = get_int("Height: ");
    }
    // N less than 1 & greater than 8
    while (n < 1 || n > 8);

    // For each column
    for (int i = 0; i < n; i++)
    {
        // For each space
        for (int k = n; k > i + 1; k--)
        {
            // Print a space
            printf(" ");
        }
        //For each brick
        for (int j = 0; j < i + 1; j++)
        {
            //Print a brick
            printf("#");
        }
        //For the Hole
        for (int m = 0; m < 2; m++)
        {
            printf(" ");
        }
        //Reversal bricks
        for (int m = i + 1; m > 0; m--)
        {
            printf("#");
        }
        //Move to next row
        printf("\n");
    }
}
