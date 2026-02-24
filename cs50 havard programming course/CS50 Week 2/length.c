#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Get a string from the user
    string name = get_string("What is your name? ");


    int n = 0;
    while (name[n] != '\0')
    {
        n++;
    }
    
    // Print a greeting
    printf("Your name is %i characters long.\n", n);
}