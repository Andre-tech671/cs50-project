#include <cs50.h>
#include <stdio.h>

// Function prototypes
void meow(int n);
int get_positive_int(void);

int main(void)
{
    int times = get_positive_int();  // Correct function call
    meow(times);                     // Pass the correct variable
}

int get_positive_int(void)
{
    int n;
    do
    {
        n = get_int("Enter a positive number: ");  // Prompt inside the loop
    }
    while (n <= 0);  // Accept only positive integers
    return n;
}

void meow(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("meow\n");
    }
}