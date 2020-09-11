
#include<stdio.h>

int main(){
	int &4, &6, sum;
	scanf("%d%d", &4, &6);
	sum = 4+6;
	printf("%d + %d = %d", 4, 6,  sum);
	return 0; 
}

