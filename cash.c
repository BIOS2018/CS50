#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    float n;
    int change, coins, quarter, dime, nickel, penny;
    coins = 0;
    quarter = 25;
    dime = 10;
    nickel = 5;
    penny = 1;

    //get user input how much change is owned
    do
    {
        printf("how much change is owned: ");
        n = get_float();
    }
    while (n <= 0);

    //convert to int
    change = (int)(n * 100);

    //round
    double round(double change);

    // loops to count the coins
    while (change >= quarter)
    {
        coins = (coins + 1);
        change = (change - quarter);
    }

     // test: printf("Number of coins used after quarters: %d\n", coins);
    // test: printf("Amount of change left after quarters: %d\n", change);

    while (change >= dime)
    {
        coins = (coins + 1);
        change = (change - dime);
    }

    // test: printf("Number of coins used after dimes: %d\n", coins);
    // test: printf("Amount of change left after dimes: %d\n", change);

    while (change >= nickel)
    {
        coins = (coins + 1);
        change = (change - nickel);
    }

    // test: printf("Number of coins used after nickels: %d\n", coins);
    // test: printf("Amount of change left after nickels: %d\n", change);

    while (change >= penny)
    {
        coins = (coins + 1);
        change = (change - penny);
    }

    // min number of coins used
    printf("%d\n", coins);

    return 0;
}

