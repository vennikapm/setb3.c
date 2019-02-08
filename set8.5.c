#include<stdio.h>
#include<conio.h>
void main()
{
char a[100];
int i,b,count=0;
clrscr();
scanf("%s",a);
for(i=0;a[i]!='\0';i++)
{
count++;
}
b=count;
if((b%2)!=0)
{
a[b/2]='*';
}
else
{
a[b/2]='*';
a[(b/2)-1]='*';
}
for(i=0;a[i]!='\0';i++)
{
printf("%c",a[i]);
}
getch();
}
