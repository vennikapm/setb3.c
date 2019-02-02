#include<stdio.h>
#include<conio.h>
void main()
{
int num1,num2,mul;
clrscr();
scanf("%d%d",&num1,&num2);
mul=num1*num2;
if(mul%2==0)
{
printf("even");
}
else
{
printf("odd");
}
getch();
}
