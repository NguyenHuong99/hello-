#include <stdio.h>
#include <conio.h>


int main()
{
 int a = 1, c = 1, b, i, p;  
  
 printf("Fibonacci: ");  
 scanf("%d",&p);  
 printf("\n%d %d", a , c); 
  
 for (i = 2; i < p; ++i) 
 {  
  b = a + c;  
  printf(" %d",b);  
  a = c;  
  c = b;  
 }
}

