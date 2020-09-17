#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
  printf("The value x is: %d\n\n", (2+3)*6);
  printf("The value x is: %d\n\n", (12+6)/2*3); 
 int y, x;
  y = x = (2+3)/4; 
  printf("The value y is: %d, The value x is: %d\n\n", y, x, (2+3)/4); 
printf("The value y is: %d\n\n", 3+2*(x=7/2));
x = (int)3.8+3.3; 
printf("The value x is: %d\n\n", x, 3.8+3.3); 
printf("The value x is: %f\n\n", (2+3)*10.5);
printf("The value x is: %d\n\n", 3/5*22.0);
printf("The value x is: %f", 22.0*3/5); 
	return 0;
}
