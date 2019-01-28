#include<stdio.h> 
#include<conio.h>
void main()
{
int n,min,hr;
clrscr();
printf("enter test");
scanf("%d",&n);
while(n>0)
{
printf("enter min");
scanf("%d",&min);
if(min<60)
{
hr=0;
min=min;
}
else if(min==60)
{
hr=1;
min=0;
}
else
{
hr=min/60;
min=min%60;
}
printf("%dhour %dminutes",hr,min);
n--;
}
getch();
}
