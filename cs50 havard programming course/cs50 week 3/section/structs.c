/*Create an array of three candidates*/
/*Populate an array using users input*/
/*Search the array to find the most votes */

#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Define candidate struct
typedef struct
{
    string name;
    int votes;
}
candidate;

int main(void)
{
    // define number of candidates
    const int num = 3;
    candidate candidates[num];

    // populate the array with users input
    for (int i = 0; i < num; i++)
    {
        candidates[i].name = get_string("Name: ");
        candidates[i].votes = get_int("Votes: ");
    }

    // find candidate with most votes
    int max_index = 0;
    for (int i = 1; i < num; i++)
    {
        if (candidates[i].votes > candidates[max_index].votes)
        {
            max_index = i;
        }
    }

    printf("Winner: %s with %i votes\n", candidates[max_index].name, candidates[max_index].votes);
}
