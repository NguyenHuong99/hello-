#include <stdio.h>

void main(){
	char alpha[26];
	int i, j;
	
	for (i = 65, j = 0; i < 91; i++, j++)
{
	alpha[j] = i;
	   printf("Nguoi xep hang bay gio duoc chi dinh la %c\n", alpha[j]);
	 } 
	 getchar();
}
	
