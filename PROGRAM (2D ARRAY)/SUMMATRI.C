/*wap to create two 3 by 3 matrix and print sum of it*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int m1[3][3],m2[3][3],i,j,sum[3][3];
    clrscr();
    //logic 1 array
    for(i=0;i<3;i++)
    {
	for(j=0;j<3;j++)
	{
	    printf("Enter value for m1[%d][%d]",i,j);
	    scanf("%d",&m1[i][j]);
	}
    }
    //logic 2 array
    for(i=0;i<3;i++)
    {
	for(j=0;j<3;j++)
	{
	    printf("Enter value for m2[%d][%d]",i,j);
	    scanf("%d",&m2[i][j]);
	}
    }
    clrscr();
    printf("\n");
    //logic print 1 array
    printf("\nmatrix:1\n");
    for(i=0;i<3;i++)
    {
	for(j=0;j<3;j++)
	printf("%d\t",m1[i][j]);
	printf("\n");
    }
    //logic sum of two array
    for(i=0;i<3;i++)
    {
	for(j=0;j<3;j++)
	{
	     if(m1[i][j]==m2[i][j])
	     sum[i][j]=m1[i][j]+m2[i][j];
	}
	printf("\n");
    }
    //logic print sum of two matrix
    printf("\n sum of two matrix:\n");
    for(i=0;i<3;i++)
    {
	 for(j=0;j<3;j++)
	 printf("%d\t",sum[i][j]);
	 printf("\n");
    }
    getch();
}