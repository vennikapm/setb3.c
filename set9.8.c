#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,t,x,y,res,lcm;
clrscr();
scanf("%d %d",&a,&b);
x=a;
y=b;
while(y!=0)
{
t=y;
y=y%x;
x=t;
}
res=x;
lcm=(a*b)/res;
printf("%d",lcm);
getch();
}
