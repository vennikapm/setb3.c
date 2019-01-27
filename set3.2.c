#include<stdio.h>
#include<conio.h>
void main()
{
int n,a[100],num,max=0;
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
if(a[i]>max)
{
max=a[i];
}
}
n--;
}
getch();
}
