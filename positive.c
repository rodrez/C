#include <stdio.h>
#include <cs50.h>

int get_positive_int(void)

int main(void)
{
    int i = get_positive_int();
    print('%i\n', i);
}

int get_positive_int(void)
{
    int n;
    // Runs the code at least one
    // Then check the condition
    do
    {
        n = get_int("Positive Integer: ");
    }
    while(n < 1);
    return n;
}
