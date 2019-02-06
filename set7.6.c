#include<stdio.h>
#include<conio.h>
void main()
{
int a,i,flag=0;
clrscr();
scanf("%d",&a);
for(i=2;i<a/2;i++)
{
if(a%i==0)
{
flag=1;
}
}
if(flag==1)
{
    printf("not");
}
else
{
printf("prime");
}
getch();
}

