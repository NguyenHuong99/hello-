#include<stdio.h>
void main(){
	int a, b, j;
	
		printf("Enter number: ");
	for (a = 0; a < 10; a++)
	{
		scanf("%d", &a);
		}
		b = aqqs(a);
		
}
	
	aqqs(int a)
	{
		int b;
		b = a;
		for(b = a; b >= 1; b--)
	{	
		printf("%d, ", b);
		}
	return(b);
}
