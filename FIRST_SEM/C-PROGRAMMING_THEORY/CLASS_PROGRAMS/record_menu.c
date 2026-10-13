#include <stdio.h>

int main()
{
    int choice;
    float num1, num2, result;

    printf("----- MENU-DRIVEN CALCULATOR -----\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulus\n");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);

            result = num1 + num2;
            printf("Addition = %.2f\n", result);
            break;

        case 2:
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);

            result = num1 - num2;
            printf("Subtraction = %.2f\n", result);
            break;

        case 3:
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);

            result = num1 * num2;
            printf("Multiplication = %.2f\n", result);
            break;

        case 4:
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);

            if(num2 != 0)
            {
                result = num1 / num2;
                printf("Division = %.2f\n", result);
            }
            else
            {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;

        case 5:
        {
            int a, b;

            printf("Enter two integers: ");
            scanf("%d %d", &a, &b);

            if(b != 0)
                printf("Modulus = %d\n", a % b);
            else
                printf("Error: Modulus by zero is not allowed.\n");

            break;
        }

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}