#include<stdio.h>
#include<conio.h>
void main()
{
int num,mul=1,rem;
clrscr();
scanf("%d",&num);
while(num>0)
{
rem=num%10;
mul=mul*rem;
num=num/10;
}
printf("%d",mul);
getch();
}
