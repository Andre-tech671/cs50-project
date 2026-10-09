#include <stdio.h>

// int main(void)
// {
//     int day;

//     printf("Enter a number between 1 and 7: ");
//     scanf("%d", &day);

//     switch (day)
//     {
//         case 1:
//             printf("Monday\n");
//             break;
//         case 2:
//             printf("Tuesday\n");
//             break;
//         case 3:
//             printf("Wednesday\n");
//             break;
//         case 4:
//             printf("Thursday\n");
//             break;
//         case 5:
//             printf("Friday\n");
//             break;
//         case 6:
//             printf("Saturday\n");
//             break;
//         case 7:
//             printf("Sunday\n");
//             break;
//         default:
//             printf("Invalid day. Please enter a number between 1 and 7.\n");
//             break;
//     }

//     return 0;
// }


int main (void){
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    switch(age){
        case 18:
            printf("you can have Licence\n");
            break;
        case 21:
            printf("you can have a Driving Licence\n");
            break;
        case 25:
            printf("you can have a Driving Licence and can vote\n");
            break;  
        case 30:
            printf("you can have a Driving Licence, can vote and can drink\n");
            break;
        default:
            printf("You are not Eligible. Please Enter Your Age.\n");    
            break;
    }
    return 0;
}