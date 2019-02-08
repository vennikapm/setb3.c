#include<stdio.h>
#include<conio.h>
void main()
{
int num,i,count=0;
clrscr();
scanf("%d",&num);
for(i=2;i<=num;i++)
{
if(num%i==0)
{
count++;
}
}
if(count>1)
{
printf("yes");
}
else
{
printf("no");
}
getch();
}
