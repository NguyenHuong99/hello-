#include <stdio.h>
#include <conio.h> 

main(){
	int i, j, k, a, v, c;
	i = 0; 
	a = 0;
		printf("Enter no. of row: ");
		scanf("%d", &i, &a);
		printf("\n");
		for  (j = 0; j < i; j++) {
			printf("\n");
		for (k = 0; k <= j; k++)
			printf("*");
	if (a ==0){
	
		for (v = 0; v > a; v++)
			printf("\n");
		for (c = 0; c >= v; c++)
		printf("-");
}
	}
}
