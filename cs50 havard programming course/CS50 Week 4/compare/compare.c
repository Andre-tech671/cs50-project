#include <cs50.h>
#include <stdio.h>

// get two integers from the user and compare them

int main(void){
    // get two integers from the user
    int i  = get_int("i: ");
    int j = get_int("j: ");

    // compare the two integers
    if (i == j){
        printf("Same\n");
    }else{
        printf("Different\n");
    }
}
