#include <stdio.h>
#include <string.h>
#include <conio.h>

void main(){
	int ary[10];
	int i, total, high;
	for (i = 0; i < 10; i++) 
{
	printf("\nNhap gia tri: %d: ", i + 1);
	scanf("%d", &ary[i]); 
}
/* Hien thi cao nhat trong cac so da nhap */
	high = ary[0];
	for (i = 1; i < 10; i ++) 
{
		if (ary[i] > high)
	high = ary[i];
}
	printf("\n Gia cao nhat da nhap la %d", high);
 /* Ban in trung binh cua yeu to nghe thuat la */
 for (i = 0, total = 0; i < 10; i ++)
   total = total + ary[i];
   printf("\nTrung binh cua yeu to nghe thuat la %d", total/i);
}
