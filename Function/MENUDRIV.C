/*write a menu driven pogramme which performe following operation.
Date:29/12/2021*/
#include<stdio.h>
#include<conio.h>
void main()
{
     int c,v1,v2;
     char ch;
     clrscr();
     do
     {
     clrscr();
     printf("\n\n\t\t menu \n\t");
     printf("___________________");
     printf("\n\t\t Addition \n\t\t");
     printf("\n\t________________");
     printf("\n\t\t\t Enter your choise:");
     scanf("%d",c);
     switch(c)
     {
	case 1:
		printf("\n\t Enter 2 value:");
		scanf("%d%d",&v1,&v2);
		printf("\n sum of %d&%d is %d",v1,v2,v1+v2);
		break;
	case 2:
		printf("\n\t Enter 2 value:");
		scanf("%d%d",&v1,&v2);
		printf("\n sum of %d&%d is %d",v1,v2,v1-v2);
		break;
	case 3:
		exit(0);
	default:
		printf("\n\n\t Invalid choise.\n please enter number between 1 to 3");
     }
     printf("\n\n\t\t Do you want to continue?(Yes=Y/y,NO=N,n):");
     flushall();
     scanf("%c",&ch);
     }
     while (ch=='Y'||ch=='y');
     getch();
}