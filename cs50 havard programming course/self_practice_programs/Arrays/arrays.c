#include <stdio.h>

int main(){

    // Declare and initialize an array of integers
    // int myNumber[] = {1, 2, 3, 4, 5}; // Declare and initialize an array of integers
    // printf("The first element of the array is: %d\n", myNumber[0]); // Access and print the first element of the array
    // return 0;

    //looping through an array using a for loop
    int myNumber[] = {1, 2, 3, 4, 5}; // Declare and initialize an array of integers
    int arraySize = sizeof(myNumber) / sizeof(myNumber[0]); // Calculate the size of the array
    int i;
    for (i = 0; i < arraySize; i++) { // Loop through the array
        printf("The %d element of the array is: %d\n", i, myNumber[i]); // Access and print each element of the array
    }
    return 0;
}