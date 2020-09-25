#include <stdio.h>
#include <conio.h> 

main(){
	int num1, a, c, b;
	printf("The number 0 to 10 are: \n\n");
	 
	for (num1 = 3; num1 <=10; num1+=3)
		printf("%d\n",num1);
		 
		printf("Nhap cac so le tren : \n");
		  scanf("%d %d %d", &a, &c, &b);
		
		printf("Tong: %d",a + c + b) ;	
		 

}
