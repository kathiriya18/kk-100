#include<stdio.h>
#include<conio.h>

void main()

{
     int k,h;
     clrscr();
     for(k=1;k<=5;k++)
     {
	 for(h=k;h>=1;h--)
	 {
	    printf("%d",h);
	 }
	 printf("\n");
     }
     getch();
}