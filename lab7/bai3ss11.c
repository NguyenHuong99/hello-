#include<stdio.h>

void main(){
	int a[100];
	int s, b, p;

	for (s = 0; s < 5; s++){
		printf("\nEnter number %d : ", s+1);
		scanf("%d", &a[s]);
}

	for (p = 5 - 1; p >= 0; p--)
	{
		printf("\n");
		printf("Number is: %d",a[p]);
  }
}
