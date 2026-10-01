#include <stdio.h>

int main() {
    int c, dbms, python,i;
    float total, percentage;
    for(i=0;i<3;i++)
    {
        printf("\nenter students details:\n",i+1);


    // Input marks
    printf("Enter marks in C Programming: ");
    scanf("%d", &c);

    printf("Enter marks in DBMS: ");
    scanf("%d", &dbms);

    printf("Enter marks in Python: ");
    scanf("%d", &python);

    // Calculate total and percentage
    total = c + dbms + python;
    percentage = total / 3;

    printf("\nTotal = %.2f", total);
    printf("\nPercentage = %.2f%%\n", percentage);

    // Classification using if-else
    if (percentage >= 75) {
        printf("Result: Distinction");
    }
    else if (percentage >= 60) {
        printf("Result: First Class");
    }
    else if (percentage >= 50) {
        printf("Result: Second Class");
    }
    else {
        printf("Result: Fail");
    }
    }
    return 0;
}