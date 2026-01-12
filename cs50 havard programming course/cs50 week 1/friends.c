#include <stdio.h>
#include <cs50.h>


int main(void){
    //Name
    string name = get_string("What is your name? ");
    //Age
    int age = get_int("What is your age? ");
    //HomeTown
    string homeTown = get_string("What is your hometown? ");
    //Phone Number
    int phoneNumber = get_int("What is your phone number? ");

    printf("My New friends name is %s, age is %d, hometown is %s, and phone number is %d\n", name, age, homeTown, phoneNumber); 
}