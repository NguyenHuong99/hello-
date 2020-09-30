#include <stdio.h>

void main()
{
	int var = 500, *ptr_var;
	/* var is declared as an integer and ptr_var á a pointer pointing to an integrt */
	
	ptr_var = &var; /* stores address of var in ptr_var */
	/* Prints value of variable (var) and address where var is stored */
	
	printf("The value %d is stored at address %u:", var, &var);
	/* Prints value stored in ptr variable (ptr_var) and address where ptr_var is stored */
	
	printf("\nThe value %u is stored at address: %u", ptr_var, &ptr_var);
	/* Prints value of variable (var) and address where var is stored, using pointer to variable */
	
	printf("\nThe value %d is stored at address: %u", *ptr_var,   ptr_var);
	
}
