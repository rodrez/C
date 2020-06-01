#include <stdio.h>
#include <cs50.h>

int main(void)
{

    // float change  = .41;

    float quarter = .25;
    float pennie = .01;
    float dime = .10;
    float nickel = .05;

    int coins = 0;

    float change;
    do
    {
        change = get_float("Change owed: ");
    }

    while (change <= 0.01);

    while (change >= 0.00)
    {

    if (change - quarter > 0)
    {
        coins++;
        change = change - quarter;
    }

    else if (change - dime > 0)
    {
        coins++;
        change = change - dime;
    }

    else if (change - nickel > 0)
    {
        coins++;
        change = change - nickel;
    }

    else if (change - pennie > -0.01)
    {
        coins++;
        change = change - pennie;
    }
    // else if (change == 0)
    // {
    //     break;
    // }
    }

    printf("%i\n", coins);

}
