/* wap to enter 5 string and print it.*/
#include<stdio.h>
#include<conio.h>
void main()
{
    char s[5][10];// s content 5 string and each string has 9 character
    int i;
    clrscr();
    //logic: to input 5 string
    for(i=0;i<5;i++)
    {
	printf("Enter name %d:",i+1);
	flushall();
	gets(s[i]);
    }
    //logic: to print 5 string
    for(i=0;i<5;i++)
       printf(" Name %d:%s\n",i+1,s[i]);
    getch();
}

