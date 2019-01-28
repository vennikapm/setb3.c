#include<stdio.h>
#include<conio.h>
void main()
{
int n,min,hr,hr1,hr2,min1,min2;
clrscr();
printf("enter test");
scanf("%d",&n);
while(n>0)
{
printf("enter first time");
scanf("%d %d",&hr1,&min1);
printf("enter sccond time");
scanf("%d %d",&hr2,&min2);
if(min1>min2)
{
min=min1-min2;
hr=hr1-hr2;
}
else
{
min1=min1+60;
min=min1-min2;
hr1=hr1--;
hr=hr1-hr2;
}
printf("%d hour %d minutes",hr,min);
n--;
}
getch();
}

