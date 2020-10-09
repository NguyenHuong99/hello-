/*
 * C check even odd using function
 */

#include <stdio.h>

/* Function declaration */
int evenOdd(int num);

int main()
{
    int num, isEven;

    printf("Enter a number: ");
    scanf("%d", &num);

    /* Function call */
    isEven = evenOdd(num);
    if(isEven == 0)
        printf("The given number is EVEN.");
    else
        printf("The given number is ODD.");
    return 0;
}

/* Function definition */
int evenOdd(int num)
{
    /* Return 0 if num is even */
    if(num % 2 == 0)
        return 0;
    else
        return 1;
}
