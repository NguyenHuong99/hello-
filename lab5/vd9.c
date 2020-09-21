#include <stdio.h>
#include <conio.h> 

void main(){
	int x;
	char i, ans;
	i = '\n';
	do{
		printf("Enter sequence of character: ");
		do{
		i = getchar();
		x++;
	}while (i != '\n');
	i = '\n';
	printf("\nNumber of character entered is: %d", --x);
	printf("\nMore sequences (Y/N)?");
	  ans = getch();
}while (ans == 'Y' || ans == 'y');
		}
	
	
