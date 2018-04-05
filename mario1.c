#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n;
    // Reprompts till correct input
    do
    {
        printf("Height: ");
        n = get_int();
    }
    while(n < 0 || n > 23);

    // Prints double half pyramids
    for (int i = 0; i < n; i++)
    {

        for(int s = i; s < n - 1; s++)
        {
            printf(" ");
        }

        for(int h1 = 0; h1 < i + 1; h1++)
        {
            printf("#");
        }

        printf("  ");

        for(int h2 = 0; h2 < i + 1; h2++)
        {
            printf("#");
        }

        printf("\n");
    }
}
