#include <cs50.h>
#include <stdio.h>


void print_columns (int height);

int main (void)
{
    //for (int i = 0; i < 3; i++)
    //{
      //  printf("i is %i\n", i);
       // printf("#\n ");
   // }

   int h = get_int("Height: ");
   print_columns(h);


   
}

void print_columns (int height)
{
    // Print height number of #
    for (int i = 0; i <= height; i++)
    {
        // Print one #
        printf("#\n");
    }
}

