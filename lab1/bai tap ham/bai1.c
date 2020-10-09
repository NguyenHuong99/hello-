#include<stdio.h>
void luffy(int *a);
int main(int argc, char const *argv[])
{
	int a[5];
	int i;
	printf("Nhap 5 so: ");
	for (i = 0; i < 5; i ++)
	{
		scanf("%d", &a[i]);
	}
	luffy(a);
	printf("\n");
	for (i = 0; i < 5; i++)
	{
		printf("%d\n", a[i]);
	}
	return 0;
}
void luffy(int *a)
{
	int i;
	int y[5];
	for (i = 5; i > 0; i--)
	{
		y[5-i] = a[i-1];
	}
	for (i - 0; i < 5; i++)
	{
		a[i] = y[i];
	}
}
