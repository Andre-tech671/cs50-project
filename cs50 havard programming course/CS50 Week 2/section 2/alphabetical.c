#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
 {
    //Get user input
    string text = get_string("Text: ");

    // Assume the string is in alphabetical order until proven otherwise
    bool is_alphabetical = true;

    //Iterate through the string, comparing each character to the next
    // We call strlen once before the loop for efficiency.
    for (int i = 0, n = strlen(text); i < n - 1; i++)
    {
        // If a character is greater than the one following it, it's not alphabetical
        if (text[i] > text[i + 1])
        {
            is_alphabetical = false;
            break; // Exit the loop early, no need to check further
        }
    }

    // Print the result
    if (is_alphabetical)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    return 0;
 }