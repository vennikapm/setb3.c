#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],i,max,n;
clrscr();
scanf("%d",&n);
if(n==10)
{
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
max=a[0];
for(i=1;i<n;i++)
{
if(a[i]>max)
{
max=a[i];
}
}
printf("%d",max);
}
else
{
printf("not poss");
}
getch();
}
