#include <stdio.h>
#include <conio.h> 

void main(){
 
int num, res;

printf("Enter a year: ");
scanf("%d", &num);

res = num %2;

if (res == 0)
	printf("The number is Even");
   else
    printf("The number is Odd");

} 

