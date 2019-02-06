#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,add;
clrscr();
scanf("%d %d",&a,&b);
add=a+b;
if(add%2==0)
{
printf("even");
}
else
{
printf("odd");
}
getch();
}
