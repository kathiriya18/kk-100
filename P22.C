#include<stdio.h>
#include<conio.h>

void main()

{
    char a,e;
    int k,h;
    clrscr();
    for(k='A';k<='E';k++)
    {
	  for(h='A';h<=k;h++)
	  {
		printf("%c",k);
	  }
	  printf("\n");

    }
    getch();
}
