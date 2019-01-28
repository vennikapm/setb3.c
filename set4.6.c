#include<stdio.h>
#include<conio.h>
void main()
{
int n,count=0,i;
char a[100];
clrscr();
scanf("%s",a);
for(i=0;a[i]!='\0';i++)
{
if((a[i]>='0'&&a[i]<='9')||(a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z'))
{
count=0;
}
else
{
count++;
}
}
printf("%d"count);
getch();
}
