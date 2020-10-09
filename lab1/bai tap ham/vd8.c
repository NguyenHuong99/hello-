/**
 * C program to print random prime numbers
 */

#include <stdio.h>
#include <stdlib.h> // Used for rand() function

/* Function declaration */
int randPrime();

int main()
{
    int i;
    printf("Random 5 prime numbers are: \n");
    for(i=1; i<=5; i++)
    {
        printf("%d\n", randPrime());
    }

    return 0;
}

/* Function definition */
int randPrime()
{
    int i, n, isPrime;
    isPrime = 0;

    while(!isPrime)
    {
        n = rand(); // Generates a random number

        /* Prime checking logic */
        isPrime = 1;
        for(i=2; i<=n/2; i++)
        {
            if(n%i==0)
            {
                isPrime = 0;
                break;
            }
        }

        if(isPrime ==1)
        {
            return n;
        }
    }
}
