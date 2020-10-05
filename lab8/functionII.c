#include<stdio.h>

void main()
{
	int a, b, c, sum;
		printf("\n Enter any three numbers: ");
		scanf("%d %d %d", &a, &b, &c);
		
		sum = luffy(a, b, c);
		
		printf("\nSum = %d", sum);
}
	luffy (int x, int y, int z)
	{
		int d;
			d = x + y + z;
			return (d);
	}
