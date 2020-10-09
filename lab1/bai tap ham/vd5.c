/**
 * C program to find maximum between two numbers using function
 */

#include <stdio.h>

/* Function declaration */
int max(int num1, int num2);

int main()
{
    int num1, num2, maximum;
    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);

    /*
     * Call max function with arguments num1 and num2
     * Store the maximum returned to variable maximum
     */
    maximum = max(num1, num2);

    printf("Maximum = %d", maximum);

    return 0;
}

/* Function definition */
int max(int num1, int num2)
{
    int maximum;

    // Find maximum between two numbers
    if(num1 > num2)
        maximum = num1;
    else
        maximum = num2;

    // Return the maximum value to caller
    return maximum;
}
