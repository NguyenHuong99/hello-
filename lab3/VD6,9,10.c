#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
char v;
   printf("\nPlease enter any character: ");
   v = getchar();
   printf("\nThe character entered by you is %c. ", v);
   
	return 0;
}
