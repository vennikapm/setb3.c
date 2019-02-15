#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,sym;
clrscr();
scanf("%d %c %d",&a,&sym,&b);
if(sym=='/')
{
printf("%d",a/b);
}
else
{
printf("%d",a%b);
}
getch();
}
