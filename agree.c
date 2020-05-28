#include <stdio.h>
#include <cs50.h>

int main (void)
{
    char c = get_char("Do you agree?\n");

    if (c == 'y' || c == 'Y')
    {
        printf("You agree.\n");
    }
    else if (c == 'n' || c == 'N')
    {
        printf("You don't agree");
    }
}
