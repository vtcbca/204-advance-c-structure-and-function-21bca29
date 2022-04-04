/*wap to create 3 by 3 matrix and check it is diognal matrix or not*/
#include<stdio.h>
#include<conio.h>
void main()
{
     int m[3][3],i,j,c=0,s=0;
     clrscr();
     for(i=0;i<3;i++)
     {
	  for(j=0;j<3;j++)
	  printf("\n Enter value of m[%d][%d]:",i,j);
	  scanf("%d",&m[i][j]);
     }
     clrscr();
     //logic print matrix
     printf("\nmatrix:1\n");
     for(i=0;i<3;i++)
     {
	  for(j=0;j<3;j++)
	  printf("%d\t",m[i][j]);
	  printf("\n");
     }
     //logic check matrix is diognal or not)
     for(i=0;i<3;i++)
     {
	  for(j=0;j<3;j++)
	  {
	      if(i==j)
	      {
		   if(i>0 && j>0)
		   c=1;
	      }
	      if(i!=j)
	      {
		   if(m[i][j]==0)
		   s=1;
	      }
	  }
     }
     if(c==1 && s==1)
	   printf("\n Matrix is diognal matrix");
     else
	   printf("\n Matrix is not a diognal matrix");
     getch();
}
