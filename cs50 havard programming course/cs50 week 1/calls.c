#include <stdio.h>

int main(void)
{
    int calls;
    float cost;

    printf("Number of calls made: ");
    scanf("%d", &calls);

    if (calls <= 100)
    {
        cost = calls * 0.05;
    }
    else if (calls <= 200)
    {
        cost = (100 * 0.05) + ((calls - 100) * 0.03);
    }
    else
    {
        cost = (100 * 0.05) + (100 * 0.03) + ((calls - 200) * 0.02);
    }

    printf("Cost of calls: %.2f\n", cost);
}