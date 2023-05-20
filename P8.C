#include<stdio.h>
#include<conio.h>

void main()

{
    int k,h;
    clrscr();
    for(k=45;k<=49;k++)
    {
       for(h=45;h<=k;h++)
       {
	   printf("%d",h);
       }
       printf("\n");
    }
    getch();
}