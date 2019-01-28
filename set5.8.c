#include<stdio.h>
#include<conio.h>
void main()
{
int num,sum,a[100],i;
clrscr();
scanf("%d",&num);
for(i=0;i<num;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<num;i++)
{
sum=sum+a[i];
}
printf("%d",sum/num);
getch();
}
