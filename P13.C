#include<stdio.h>
#include<conio.h>

void main()

{
    int k,h,a;
    clrscr();
    for(k=1;k<=5;k++)
    {
	for(a=k;a>1;a--)
	{
	   printf(" ");
	}
	for(h=k;h<=5;h++)
	{
	   printf("%d",h);
	}
	printf("\n");

    }
    getch();

}