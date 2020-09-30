#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
   char s[100];
   int i, tongNA = 0, tongPA = 0;
   printf("Nhap ten: ");
   gets(s); 
   for(i = 0; i < strlen(s); i++)
   {
      switch(s[i])
      {
     case 'A':
     case 'a':
     case 'E':
     case 'e':
     case 'I':
     case 'i':
     case 'O':
     case 'o':
     case 'U':
     case 'u':
          tongNA++;
          break;
    
    case 'Y':
    case 'y':
    case 'G':
    case 'g':
    	tongPA++;
    	break;
    	
     default:;
     }
  }
  printf("\nCo %d nguyen am",tongNA);
  printf("\nCo %d phu am", tongPA);
  getch();
}
