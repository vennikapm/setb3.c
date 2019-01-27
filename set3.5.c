#include<stdio.h>
#include<conio.h>
void main()
{
int n,num,a[100],k=0,i,temp,j;
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
for(j=i+1;j<num;j++)
{
if(a[j]<a[i])
{
    temp=a[i];
    a[i]=a[j];
    a[j]=temp;
}
}
}
printf("%d",a[num/2]);
n--;
}
getch();
}
