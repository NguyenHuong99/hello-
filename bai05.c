#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    int a = 6;
	int b = 8;
	int h = 14; 
	int S;
	S = 6 + 8 / 2 * 14;  
	printf("Top : %d\n", a);
	printf("Bottom : %d\n", b);
	printf("Height : %d\n", h); 
	 
	printf("Dien tich hinh thang: %d", S);
	scanf("%d + %d / %d * %d", a, b, h); 

	return 0;
}
