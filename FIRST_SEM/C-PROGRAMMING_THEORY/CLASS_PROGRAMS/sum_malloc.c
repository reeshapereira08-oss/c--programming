
#include <stdio.h>   // Header file for input and output functions
#include <stdlib.h>  // Header file for malloc() and free()

int main()           // Main function starts
{
    int *arr;        // Declare an integer pointer for the array
    int n, i, sum = 0;  // Declare variables for size, loop counter, and sum

    printf("Enter the number of elements: ");  // Ask for the array size
    scanf("%d", &n);                           // Read the number of elements

    if (n <= 0)                                // Check whether the size is valid
    {
        printf("Invalid array size\n");        // Display an error message
        return 1;                              // End the program
    }

    arr = (int *)malloc(n * sizeof(int));  // Dynamically allocate memory for n integers

    if (arr == NULL)                       // Check whether memory allocation failed
    {
        printf("Memory allocation failed\n");  // Display an error message
        return 1;                              // End the program
    }

    printf("Enter %d elements:\n", n);     // Ask the user to enter array elements

    for (i = 0; i < n; i++)                // Repeat for each array element
    {
        scanf("%d", &arr[i]);              // Read an array element
    }

    for (i = 0; i < n; i++)                // Traverse all array elements
    {
        sum = sum + arr[i];                // Add each element to the sum
    }

    printf("Sum of array elements = %d\n", sum);  // Display the total sum

    free(arr);                             // Deallocate the dynamically allocated memory

    return 0;                              // End the program successfully
}

