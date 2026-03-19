#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void){
    string names[] = {"Bill", "Charlie", "Fred", "George", "Ginny", "Percy", "Ron"};
    string numbers[] = {"+1-617-495-1000", "+1-949-468-2750", "+1-678-305-1569", "+1-617-495-1000", "+1-949-468-2750"};

    string name = get_string("Name: ");
    for (int i = 0; i < 7; i++)
    {
        if (strcmp(names[i], name) == 0)
        {
            printf("%s\n", numbers[i]);
            return 0;
        }
    printf("Not Found\n");
    return 1;

    }
}