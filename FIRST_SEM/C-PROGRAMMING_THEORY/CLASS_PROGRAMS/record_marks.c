#include <stdio.h>

int main()
{
    int roll_no;
    float marks1, marks2, marks3, marks4, marks5;
    float total, average, percentage;

    printf("Enter Roll Number: ");
    scanf("%d", &roll_no);

    printf("Enter marks in 5 subjects: ");
    scanf("%f %f %f %f %f", &marks1, &marks2, &marks3, &marks4, &marks5);

    total = marks1 + marks2 + marks3 + marks4 + marks5;
    average = total / 5;
    percentage = (total / 500) * 100;

    printf("\n----- STUDENT MARKS REPORT -----\n");
    printf("Roll Number : %d\n", roll_no);
    printf("Total Marks : %.2f / 500\n", total);
    printf("Average     : %.2f\n", average);
    printf("Percentage  : %.2f%%\n", percentage);

    return 0;
}


