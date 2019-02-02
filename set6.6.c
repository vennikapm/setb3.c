#include<stdio.h>
#include<conio.h>
void main()
{
char a[100];
int i,countal=0,countnum=0;
clrscr();
gets a;
for(i=0;a[i]!='\0';i++)
{
if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z'))
{
countal++;
}
else
{
countnum++;
}
}
if(countal>0&&countnum>0)
{
printf("yes");
}
else
{
printf("no");
}
getch();
}
