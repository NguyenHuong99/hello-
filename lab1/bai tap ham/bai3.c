#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	printf("\nNhap N = ");
	scanf("%d", &n);
	if(n < 2)
	{
		printf("\n%d Khong phai so nguyen to", n);
		return 0;
	}
	int count = 0;
	int i;
	for (i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			count++;
		}
	}
	if (count == 0)
	{
		printf("\n%d la so nguyen to", n);
		}
		else
			printf("\n%d khong phai so nguyen to", n);
	
}
