#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],i,n,val,count=0;
clrscr();
scanf("%d",&n);
scanf("%d",&val);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
   if(a[i]==val)
   {
   count++;
   }
}
printf("%d",count);
getch();
}
