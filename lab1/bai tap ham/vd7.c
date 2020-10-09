/**
 * C program to print natural numbers using functions
 */

#include <stdio.h>

/* Function declaration */
void printNaturalNumbers(int start, int end);

int main()
{
    int s, e;
    printf("Enter lower range to print natural numbers: ");
    scanf("%d", &s);
    printf("Enter upper limit to print natural numbers: ");
    scanf("%d", &e);

    printNaturalNumbers(s, e);

    return 0;
}

/* Function definition */
void printNaturalNumbers(int start, int end)
{
    printf("Natural numbers from %d to %d are: \n", start, end);
    while(start <= end)
    {
        printf("%d, ", start);
        start++;
    }
}
