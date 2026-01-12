#include <stdio.h>

// Function prototype
void print_row(int n);

int main(void)
{
    const int n = 3;
    //print rows
    for (int i = 0; i < n; i++)
    {
        print_row(5);  // Call function to print 5 hashes per row
    }
}

// Function definition
void print_row(int n)
{
    for (int col = 0; col < n; col++)
    {
        printf("#");
    }
    printf("\n");
}