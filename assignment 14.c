#include <stdio.h>

int main() {
    int month, days;

    printf("Enter a number between 1 to 12 to represent a month: ");
    scanf("%d", &month);

    switch (month) {
        case 1:
            days = 31;
            break;
        case 2:
            days = 28;
            break;
        case 3:
            days = 31;
            break;
        case 4:
            days = 30;
            break;
        case 5:
            days = 31;
            break;
        case 6:
            days = 30;
            break;
        case 7:
            days = 31;
            break;
        case 8:
            days = 31;
            break;
        case 9:
            days = 30;
            break;
        case 10:
            days = 31;
            break;
        case 11:
            days = 30;
            break;
        case 12:
            days = 31;
            break;
        default:
            printf("Invalid input. Please enter a number between 1 and 12.\n");
            return 0;
    }

    printf("Number of days in month %d: %d\n", month, days);

    return 0;
}
