#include <stdio.h>

int main()
{
    char first[20], middle[20], last[20];

    printf("Enter first name: ");
    scanf("%s", first);

    printf("Enter middle name: ");
    scanf("%s", middle);

    printf("Enter last name: ");
    scanf("%s", last);

    printf("Abbreviated name: %c. %c. %s", first[0], middle[0], last);

    return 0;
}
