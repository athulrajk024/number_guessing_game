#include <stdio.h>

int main() {
    int dayofWeek = 2;  // Change this value to test different days

    switch(dayofWeek) {
        case 1:
            printf("It's a Monday\n");
            break;
        case 2:
            printf("It's a Tuesday\n");
            break;
        case 3:
            printf("It's a Wednesday\n");
            break;
        case 4:
            printf("It's a Thursday\n");
            break;
        case 5:
            printf("It's a Friday\n");
            break;
        case 6:
            printf("It's a Saturday\n");
            break;
        case 7:
            printf("It's a Sunday\n");
            break;
        default:
            printf("Invalid day of the week\n");
    }

    return 0;
}
