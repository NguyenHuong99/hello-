#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
  int c = 3;
  int q = 5; 
  int Dientichhinhvuong;
   Dientichhinhvuong = c * q; 
  
  int y = 4, s = 5; 
  int Chuvihinhvuong;
  Chuvihinhvuong = y * s;
  
  int t = 5, g = 6; 
  int Dientichhinhtron;
  Dientichhinhtron = t * g;
   
   int a = 5, e = 7 ;
   int Chuvihinhtron;
   Chuvihinhtron = a * e; 
   
   int o = 3, v = 9;
   int Dientichhinhchunhat;
   Dientichhinhchunhat = o * v;
    
    int b = 3, d = 5;
	int Chuvihinhchunhat;
	Chuvihinhchunhat = b * d;
	  
   printf("Dien tich hinh vuong = %d\n", Dientichhinhvuong);
   printf("Chu vi hinh vuong = %d\n", Chuvihinhvuong);
  
   printf("Dien tich hinh tron = %d\n", Dientichhinhtron); 
   printf("Chu vi hinh tron = %d\n", Chuvihinhtron); 
  
   printf("Dien tich hinh chu nhat = %d\n", Dientichhinhchunhat); 
   printf("Chu vi hinh chu nhat = %d\n", Chuvihinhchunhat); 
  
   scanf("%d * %d = %d", c,q,Dientichhinhvuong);  
   scanf("%d * %d = %d", y,s,Chuvihinhvuong); 
   scanf("%d * %d = *d", t,g,Dientichhinhtron);
   scanf("%d * %d = *d", a,e,Chuvihinhtron);
   scanf("%d * %d = *d", o,v,Dientichhinhchunhat);
   scanf("%d * %d = *d", b,d,Chuvihinhchunhat); 
  
   return 0; 
}


