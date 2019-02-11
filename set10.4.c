#include<stdio.h>
#include<conio.h>
void main()
{
int num,val,i,a[100];
clrscr();
scanf("%d %d",&num,&val);
for(i=0;i<num;i++)
{
scanf("%d",&a[i]);
}
for(i=1;i<num;i++)
{
if(i==val)
{
printf("%d",a[i]);
}
}
getch();
}
