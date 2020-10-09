#include<stdio.h>
void printArray(int arr[], int size)
{
	int i;
		printf("Array elenments are: ");
		for (i = 0; i < size; i++)
		{
			printf("%d, ", arr[i]);
		}
}
	int main()
	{
		int arr[5];
		printArray(arr, 5);
		return 0;
	}
