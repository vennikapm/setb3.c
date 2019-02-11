#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,vol,area;
clrscr();
scanf("%d %d %d",&a,&b,&c);
vol=a*b*c;
area=(2*a*b)+(2*b*c)+(2*c*a);
printf("%d %d",area,vol);
getch();
}
