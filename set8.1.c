#include<stdio.h>
#include<conio.h>
void main()
{
char a[100],b[100];
int i,j=0,temp=0,count=0;
clrscr();
scanf("%[^\n]s",a);
for(i=0;a[i]!='\0';i++)
{
count++;
}
for(i=count-1;i>=0;i--)
{
b[j]=a[i];
j++;
}
for(i=0;a[i]!='\0';i++)
{
if(a[i]==b[i])
{
temp++;
}
}
if(temp==count)
{
printf("yes");
}
else
{
printf("no");
}
getch();
}
