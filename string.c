#include <cs50.h>
#include <stdio.h>

int main(void){
    string answer = get_string("What is your name? \n"); 
    printf("Hello, %s\n", answer);
}

// IN order to compile this code appropiately wi need to link the cs50 library when running the clang command in terminal
// However, a better way to do this is to use the make command and the computer will figure out whatever libraries or commands it needs to run
