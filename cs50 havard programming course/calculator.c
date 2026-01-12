#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int dollars = 1;
    char c;

    while (true)
    {
        printf("Here's $%i. Double it and give it to the next person? (y/n): ", dollars);
        scanf(" %c", &c);  // space before %c skips leftover newline

        if (c == 'y' || c == 'Y')
        {
            dollars *= 2;
        }
        else
        {
            break;
        }
    }

    printf("Here's $%i.\n", dollars);
}