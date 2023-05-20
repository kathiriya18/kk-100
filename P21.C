#include<stdio.h>
#include<conio.h>

void main()

{
   int k,h,a=1;
   clrscr();

   for(k=1;k<=5;k++)
   {
       for(h=1;h<=k;h++)
       {
	  printf("%d",a);
	  a++;
       }
       printf("\n");
   }
   getch();

}