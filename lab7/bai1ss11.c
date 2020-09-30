#include <stdio.h>
#include <string.h>
#include <conio.h>

void main(){
	int i, y = 0;
	int t;
	char x[10] [12];
	char p[12];	
		printf("Go'gg' khi ket thuc \n\n");
	do
{
		printf("Nhap Ten %d: ", y + 1);
		scanf("%s", &x[y]);
} 
	while (strcmp(x[y++], "gg"));
	y = y - 1;
	for (t = 0; t < y - 1; ++t)
{
		for (i = t + 1; i < y; ++i)
{
		if (strcmp (x[t], x[i]) >0)
	{
		strcpy(p, x[t]);
		strcpy(x[t], x[i]);
		strcpy(x[i], p);
	}
   }
  }
	  	printf("Danh sach ten duoc ghi lai: \n");
	  	for (i = 0; i < y; ++i)
	  	{
	  		printf("\n Ten %d la %s", i + 1, x[i]);
	}
} 
