#include <stdio.h>
#include <conio.h> 

main(){
int v, s = 1, t = 1;
	printf("Enter number:"); 
	scanf("%d", &v); 
	while (s <=10){
		printf("\n%d * %d = %d", v, s, v * s);
		s++;
	}

}
