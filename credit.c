#include <stdio.h>
#include <cs50.h>

int main (void)
{
    long long i, x_add, x2;
    int add_sum, x2prod, sum;

    // get user's CC number ;)
    do
    {
        printf("Your credit card number, please:\n");
        i = GetLongLong();
    }
    while ( i < 0 );


    for ( xadd = i, add_sum = 0; x_add > 0; x_add /= 100 )
        add_sum += x_add % 10;


    for ( x2 = i / 10, x2prod = 0; x2 > 0; x2 /= 100 )
    {
        if ( 2 * (x2 % 10) > 9 )
        {
            x2prod += (2 * (x2 % 10)) / 10;
            x2prod += (2 * (x2 % 10)) % 10;
        }
        else
            x2prod += 2 * (x2 % 10);
    }

    sum = addsum + x2prod;


    if ( sum % 10 == 0 )
    {
        if ( (i >= 340000000000000 && i < 350000000000000) || (i >= 370000000000000 && i < 380000000000000) )
            printf("AMERICAN EXPRESS\n");
        else if ( i >= 5100000000000000 && i < 5600000000000000 )
            printf("MASTERCARD\n");
        else if ( (i >= 4000000000000 && i < 5000000000000) || (i >= 4000000000000000 && i < 5000000000000000) )
            printf("VISA\n");
        else
            printf("INVALID\n");
    }
    else
        printf("INVALID\n");

    return 0;
}
