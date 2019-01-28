#include<stdio.h>
#include<conio.h>
void main()
{
int n,num,a[100],i;
clrscr();
printf("enter test");
scanf("%d",&n);
while(n>0)
{
printf("enter arr");
scanf("%d",&num);
for(i=0;i<num;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<num;i++)
{
printf("%d%d",a[i],i);
}
n--;
}
getch();
}
