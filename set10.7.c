#include<stdio.h>
#include<conio.h>
void main()
{
int num,rev=0,rem;
clrscr();
scanf("%d",&num);
while(num>0)
{
rem=num%10;
rev=rev*10+rem;
num=num/10;
}
printf("%d",rev);
getch();
}
