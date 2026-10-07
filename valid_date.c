#include <stdio.h>

int main() {
    int day, month, year;

    printf("Enter day, month and year: ");
    scanf("%d %d %d", &day, &month, &year);

    if (month < 1 || month > 12 || day < 1) {
        printf("The date is not correct.");
    }
    else if (month == 2) {
        if ((year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) && day <= 29)
            printf("The date is correct.");
        else if (day <= 28)
            printf("The date is correct.");
        else
            printf("The date is not correct.");
    }
    else if ((month == 4 || month == 6 || month == 9 || month == 11) && day <= 30) {
        printf("The date is correct.");
    }
    else if (day <= 31) {
        printf("The date is correct.");
    }
    else {
        printf("The date is not correct.");
    }

    return 0;
}
