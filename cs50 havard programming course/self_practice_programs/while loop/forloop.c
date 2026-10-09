#include <stdio.h>

int main(){
    // Loop to print "Hello, World!" 5 times using a for loop
    // int i;
    // for(i=0; i<5; i++){
    //     printf("Hello, World!\n");
    // }
    // return 0;

    //loop to add number by 2
    // int i;
    // for(i=0; i<=10; i+=2){
    //     printf("%d\n", i);
    // }
    // return 0;

    //nested for loop to print a pattern
    int i, j;

    for(i=1; i<2; i++){
        printf("Outer loop iteration: %d\n", i);    

        for(j=1; j<4; j++){
            printf("  Inner loop iteration: %d\n", j);
        }
    }
    
}
