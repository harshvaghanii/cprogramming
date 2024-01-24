// This program is to test the switch statements
#include <stdio.h>
int main()
{
    // Program to print the Day of the week on the basis of the number
    int day = 4;

    switch (day)
    {
    case 1:
        printf("Sunday");
        break;
    case 2:
        printf("Monday");
        break;
    case 3:
        printf("Tuesday");
        break;
    case 4:
        printf("Wednesday");
        break;
    case 5:
        printf("Thursday");
        break;
    case 6:
        printf("Friday");
        break;
    case 7:
        printf("Saturday");
        break;
    default:
        printf("Invalid number!");
        break;
    }

    return 0;
}