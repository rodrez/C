// Tells teh computer, Hey include the folder stdio.h which we will need to run the function printf
#include  <stdio.h>

// Pretty much is saying that when this is called run the program 
int main (void)
// The curly braces encapsulates the whole "logic" of the code.
{
    // Tells the computer to output "Hello World"
    // Note that we used double qutoation marks to encapsulate the desired output.
    printf("Hello World");
}

// In order to compile the progam we just wrote we can use clang which stands for c language
// just running clang will give us "a.out" as the machine code file output
// If we want to rename the outfile using clang we can pass in a few arguments
// We can use clang -o new_file_name file_to_convert
// For example clang -o hello hello.c
// This will compile and create a new file called hello

// ERRORS IN C //
// When an error happens while trying to compile C, C will try to help you figure out where is the error located
// C will ouput an error code like so:
// hello.c:5:26 The number 5 referes to which line of code, and the number 26 will be the exact location of the error
