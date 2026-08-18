#include <stdio.h>

int main() {
    float sub1, sub2, sub3, sub4, sub5;
    float total, percentage;

    printf("Enter marks of 5 subjects: ");
    scanf("%f %f %f %f %f", &sub1, &sub2, &sub3, &sub4, &sub5);

    total = sub1 + sub2 + sub3 + sub4 + sub5;
    percentage = total / 5;

    printf("Total Marks = %.2f\n", total);
    printf("Percentage = %.2f%%\n", percentage);

    return 0;
}
