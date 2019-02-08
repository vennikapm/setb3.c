#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,num;
clrscr();
scanf("%d",&num);
scanf("%d%d",&a,&b);
if(num>a&&num<b)
{
printf("yes");
}
else
{
printf("no");
}
getch();
}

