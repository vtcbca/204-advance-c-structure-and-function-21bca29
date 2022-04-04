/*wap to create two 3 by 3 matrix and print multiplication matrix.*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int m[3][3],i,j;
    clrscr();
    for(i=0;i<3;i++)
    {
	for(j=0;j<3;j++)
	{
	      printf("Enter value for m[%d][%d]",i,j);
	      scanf("%d",&m[i][j]);
	}
    }