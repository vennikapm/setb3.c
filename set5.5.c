#include<stdio.h>
#include<conio.h>
void main()
{
int num,count=0,rem;
clrscr();
scanf("%d",&num);
while(num>0)
{
rem=num%10;
count++;
num=num/10;
}
printf("%d",count);
getch();
}
