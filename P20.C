#include<stdio.h>
#include<conio.h>

void main()

{
      int k,h,a;
      clrscr();
      for(k=5;k>=1;k--)
      {
	  for(a=1;a<k;a++)
	  {
	  printf(" ");
	  }
	  for(h=5;h>=k;h--)
	  {
	      printf("*");
	  }
	  for(h=k;h<=4;h++)
	  {
	       printf("*");
	  }
	  printf("\n");

      }
      getch();
}