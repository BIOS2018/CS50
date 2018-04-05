#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        printf("Height: ");
        n = get_int();
    }
    while (n < 0 || n > 23);
    for (int l = 0; l<n; l++)
    {

    for (int s = n-l; s > 1; s--)
    {
        printf(" ");
    }
        for (int h = 0; h < l+2; h++)
        {
            printf("#");
        }
        printf("\n");
    }
}
