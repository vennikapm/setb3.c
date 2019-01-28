#include<stdio.h>
#include<conio.h>
void main()
{
int n,i;
char a[100];
clrscr();
scanf("%s",a);
for(i=0;a[i]!='0';i++)
{
if(a[i]>='0'&&a[i]<='9')
{
count++;
}
}
printf("%d",count);
getch();
}
