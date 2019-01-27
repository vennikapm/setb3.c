#include<stdio.h>
#include<conio.h>
void main()
{
char num;
clrscr();
printf("enter value");
scanf("%c",&num);
if((num>='a'&&num<='z')||(num>='A'&&num<='Z'))
{
printf("no");
}
else
{
printf("yes");
}
getch();
}
