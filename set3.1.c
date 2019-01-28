#include<stdio.h>
#include<conio.h>
void main()
{
int n,num,a,d,i,sum=0,k=1;
clrscr();
printf("enter test");
scanf("%d",&n);
while(n>0)
{
scanf("%d%d%d",&num,&a,&d);
for(i=a;k<=num;i+d)
{
sum=sum+i;
k++;
}
printf("%d",sum);
n--;
}
getch();
}
