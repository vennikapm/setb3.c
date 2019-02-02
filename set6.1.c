#include<stdio.h>
#include<conio.h>
void main()
{
int n,num,rem,rev=0,rem1;
clrscr();
scanf("%d",&n);
while(n>0)
{
scanf("%d",&num);
while(num>0)
{
rem=num%10;
num=num/10;
rev=rev*10+rem;
}
while(rev>0)
{
rem1=rev%10;
rev=rev/10;
printf("%d ",rem1);
}
n--;
}
getch();
}
