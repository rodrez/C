#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    int min;
    int max;
    // char c;
    do 
    {
        n = get_int("Enter a number.\n");
        // c = get_char("Choose a symbol.\n");
        min = 1;
        max = 8;
    }
    
    while (n > max || n < min);
    // Represents the rows
    for (int i = 0; i < n; i++)
    {   
        // Represents the columns
        for (int j = 0; j < n; j++)
        {
            if (n - j <= i + 1)
            {
                printf("#");
                // printf("%c", c);
            }
            else
            {
                printf(" ");
            }
        }
        printf("  ");
        for (int j = 0; j < n; j++){
            if (n - j >= n - i)
            {
                printf("#");
                // printf("%c", c);
                
            }
            else
            {
                printf(" ");
            }
        }
    printf("\n");
    }

}
