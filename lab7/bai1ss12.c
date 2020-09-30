#include <stdio.h>

void main(){
	int gtx[20];
	int i, a, b, n;
	printf("\nNhap gioi han cho mot mang: ", n);
	scanf("%d", &n); 
	for (i = 0; i < n; i++) 
{
	printf("\nNhap phan tu thu %d: ", i + 1);
	scanf("%d", &gtx[i]); 
}
	for (i = 1; i < 10; i ++) 

	b = gtx[0];
	a = gtx[0];
	for (i = 0; i <= n; i++) 
	if (gtx[i] > b)
		b = gtx[i];
	if (gtx[i] < a)
		a = gtx[i]; 
	printf("\n Gia tri cao nhat cua mang la %d", b);
   	printf("\nGia tri thap nhat cua mang la %d", a);
}
