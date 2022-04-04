/*wap to create UDF even odd which check inputed number is even or odd.*/
#include<stdio.h>
#include<conio.h>
void evenodd();
void main()
{
       clrscr();
       evenodd();
       getch();
}
void evenodd()
{
       int a;
       print("Enter any number:");
       scanf("%d",&a);
       if(a%2==0)
		printf("Enter number is even:");
       else
		printf("Enter number is odd:");
}