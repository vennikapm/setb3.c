#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d;
clrscr();
scanf("%d %d %d %d",&a,&b,&c,&d);
d=a*b%c;
printf("%d",d);
getch();
}
