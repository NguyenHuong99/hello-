#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/* Addition function declaration */
int add(int num1, int num2);

/* Main function definition */
int main()
{
	/* Variable declaration */
	int n, b, sum;
	
	/* Input two numbers from user */
	printf("Enter two numbers: ");
	scanf("%d%d", &n, &b);
	
	/*
	* Addition function call.
	* ni and n2 are parameters passsed to add function.
	* Value returned by add() is stored in sum.
	*/
	sum = add(n, b);
	
	/* Print value of sum */
	printf("Sum = %d", sum);
	return 0;
}
	/* Addition function definition.
	* Return type of the function is int.
	* num1 - First parameter of the function of int type.
	* num2 - Second parameter of the function of in type.*/
	int add(int num1, int num2)
	{
		int s = num1 + num2;
		/* Return value of sum to the main function */
		return s;
	}
