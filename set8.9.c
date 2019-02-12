#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,mul,sum,i,flag=0;
clrscr();
scanf("%d %d",&a,&b);
mul=a*b;
for(i=0;i<mul;i++)
{
sum=i*i;
if(sum==mul)
{
    flag=1;
}
}
if(flag==1)
{
    printf("yes");
}
else
{
printf("no");
}
getch();
}
