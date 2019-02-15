#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],temp,i,n,j,k=0;
clrscr();
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[j]<a[i])
{
    temp=a[i];
    a[i]=a[j];
    a[j]=temp;
}
}
}
for(k=0;k<n;k++)
{
printf("%d ",a[k]);
}
getch();
}
