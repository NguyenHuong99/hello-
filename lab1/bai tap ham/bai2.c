#include<stdio.h>
int luffy(int arr[]);
main()
{
	int aqq[10]; 
	int a;
	
	for (a = 0; a < 10; a++)
	{
		printf("\n Nhap 10 phan tu : ");
		scanf("%d", &aqq[a]); 
	 } 
	 printf("\n chi so phan tu nho nhat %d", luffy(aqq)); 
 } 
 	luffy(int arr[])
 	{
 		int a,c, j;
 		c = arr[0];
 		for(a = 1; a < 10; a++)
 		{
 			if (arr[a] < c)
 			j = a;
		 else
		 	j = 0;
		 }
		 
		 return(j);
	 }
