#include<stdio.h>
#include<conio.h>
void main()
{
int num,i;
clrscr();
scanf("%d",&num);
for(i=1;i<=num;i++)
{
if(num%i==0)
{
printf("%d ",i);
}
}
getch();
}
