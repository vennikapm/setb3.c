#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,t,x,y;
clrscr();
scanf("%d %d",&a,&b);
x=a;
y=b;
while(y!=0)
{
t=y;
y=y%a;
x=t;
}
res=x;
printf("%d",res);
getch();
}
