#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int n,count,i,power;
clrscr();
scanf("%d",&n);
for(i=0;i<100;i++)
{
power=pow(2,i);
if(n==power)
{
count=1;
break;
}
}
if(count==1)
{
printf("yes");
}
else
{
printf("no");
}
getch();
}
