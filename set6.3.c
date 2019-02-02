#include<stdio.h>
#include<conio.h>
void main()
{
int n,num,sum=0,rem;
clrscr();
scanf("%d",&n);
while(n>0)
{
scanf("%d",&num);
while(num>0)
{
rem=num%10;
sum=sum+rem;
num=num/10;
}
printf("%d",sum);
n--;
}
getch();
}
