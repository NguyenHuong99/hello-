#include <stdio.h>
#include <string.h>
#include <conio.h>

void main(){
	int i, n = 0;
	int item;
	char x[10] [12];
	char temp[12];
	
printf("Nhap mot chuoi tren mot dong rieng biet \n\n");
printf("Go'END' khi ket thuc \n\n");
/* Doc trong danh sach cac chuoi */
do
{
	printf("Chuoi %d: ", n + 1);
	scanf("%s", &x[n]);
} while (strcmp(x[n++], "END"));
	/* Sap xep lai danh sach chuoi */
	n = n - 1;
	for (item = 0; item < n - 1; ++item)
{
	/* Tim chuoi thap nhat con lai */
	for (i = item + 1; i < n; ++i)
{
	if (strcmp (x[item], x[i]) >0)
	{
		/* Trao doi hai chuoi */
		strcpy(temp, x[item]);
		strcpy(x[item], x[i]);
		strcpy(x[i], temp);
	}
   }
  }
  		/* Hien thi danh sach cac chuoi da sap xep */
	  	printf("Danh sach cac chuoi duoc ghi lai: \n");
	  	for (i = 0; i < n; ++i)
	  	{
	  		printf("\n Chuoi %d la %s", i + 1, x[i]);
	}
} 
