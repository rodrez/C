#include <stdio.h>

void cough(int n);

int main (void) 
{
    cough(3);
}

// The first void means it return no value
// The second void inside the parenthesis means it takes no input
// void cough(void)
void cough(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("cough\n");
    }
}
