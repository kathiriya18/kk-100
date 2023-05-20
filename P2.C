#include<stdio.h>
#include<conio.h>

void main()

{
     int k,h;
     clrscr();
     for(k=5;k>=1;k--)
     {
	  for(h=1;h<=k;h++)
	  {
	      printf("%d",h);
	  }
	  printf("\n");
     }
     getch();

}
