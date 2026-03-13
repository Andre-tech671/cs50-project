#include <stdio.h>

int main(void)
{
    // define the size of the array
    int size = 5;

    // declare an array with that size
    int numbers[size];
    numbers[0] = 1;

    // populate the array
    for (int i = 1; i < size; i++)
    {
        numbers[i] = numbers[i - 1] * 2;
    }

    // print out the values one by one
    for (int i = 0; i < size; i++)
    {
        printf("%i\n", numbers[i]);
    }

    return 0;
}