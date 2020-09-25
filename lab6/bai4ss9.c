#include <stdio.h>
#include <conio.h> 

main(){
int i, j, k, p, v, q, a, h; 
 i = 4; 
 p = 1;
 v = 0;
 h = 1; 
  	printf("(a)1"); 
	for  (j = 1; j <= i; j++) { 
		printf("\n");
	for (k = 0; k <= j; k++)
		printf("%d",p + k);
}
	printf("\n\t(b)12345"); 
	for (q = 3; q >= v; q--){		
			printf("\n\t");
			for (a = 0; a <= q; a++)
				printf("%d", a + h); 
}
}

