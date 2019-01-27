#include<stdio.h>
#include<conio.h>
void main()
{
int n,num,a[100],i,min;
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
min=a[0];
for(i=1;i<num;i++)
{
if(a[i]<min)
{
min=a[i];
}
}
printf("%d",min);
n--;
}
getch();
}
