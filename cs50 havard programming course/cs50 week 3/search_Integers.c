#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int numbers[] = {4, 8, 15, 16, 23, 42};

    int n = get_int("Number: ");
    
    // Calculate the number of elements in the array to avoid going out of bounds.
    int size = sizeof(numbers) / sizeof(numbers[0]);

    for (int i = 0; i < size; i++)
    {
        if (numbers[i] == n)
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not Found\n");
    return 1;
}
