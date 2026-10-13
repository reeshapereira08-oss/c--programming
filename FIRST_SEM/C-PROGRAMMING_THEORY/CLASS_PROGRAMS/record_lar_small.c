#include <stdio.h>

int main()
{
    int a, b, c;
    int largest, smallest;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Find largest
    if(a >= b && a >= c)
        largest = a;
    else if(b >= a && b >= c)
        largest = b;
    else
        largest = c;

    // Find smallest
    if(a <= b && a <= c)
        smallest = a;
    else if(b <= a && b <= c)
        smallest = b;
    else
        smallest = c;

    printf("\n----- RESULT -----\n");
    printf("Largest Number  : %d\n", largest);
    printf("Smallest Number : %d\n", smallest);

    return 0;
}