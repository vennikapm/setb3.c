#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,sub;
clrscr();
scanf("%d %d",&a,&b);
sub=a-b;
if(sub%2==0)
{
printf("even");
}
else
{
printf("odd");
}
getch();
}
