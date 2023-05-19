#include<stdio.h>
#include<conio.h>

void main()

{
    int k,h,a;
    clrscr();
    for(k=1;k<=5;k++)
    {
       for(a=5;a>k;a--)
       {
	   printf(" ");
       }
       for(h=1;h<=k;h++)
       {
	   printf("%d",h);
       }
       printf("\n");

     }
     getch();

}

