/**
 * C program to generate Fibonacci series using function
 */
#include <stdio.h>

/* Function declaration */
void generateFibo();

int main()
{
    generateFibo();
    return 0;
}

/* Function definition */
void generateFibo()
{
    int a, b, c, i, terms;

    /* Input a number from user */
    printf("Enter number of terms: ");
    scanf("%d", &terms);

    a = 0;
    b = 1;
    c = 0;

    printf("Fibonacci terms: \n");

    // Iterate through n terms
    for(i=1; i<=terms; i++)
    {
        printf("%d, ", c);
        a = b;      // Copy n-1 to n-2
        b = c;      // Copy current to n-1
        c = a + b;  // New term
    }
}
