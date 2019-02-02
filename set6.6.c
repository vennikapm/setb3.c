#include<stdio.h>
#include<conio.h>
void main()
{
char a[100];
int i,countal=0,countnum=0,count=0;
clrscr();
gets a;
for(i=0;a[i]!='\0';i++)
{
if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z'))
{
countal++;
}
else if(a[i]>='0'&&a[i]<='9')
{
countnum++;
}
  else
  {
    count++;
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
