#include<stdio.h>
#include<math.h>
int main()
{
	int arr[10];
	int n;
	printf("\nNhap N = ");
	scanf("%s", &arr[n]);
	
	int count = 0;
	int i;
	for (i = 2; i <= sqrt(n); i++)
	{
		if (arr[n] % i == 0)
		{
			printf("\n");
		}
	}
	if (count == 0)
	{
		printf("\n%s la so nguyen to", arr[n]);
		}
		else
			printf("\n%d khong phai so nguyen to", n);
	
}
