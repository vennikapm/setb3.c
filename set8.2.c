#include<stdio.h>
#include<conio.h>
void main()
{
char a[100];
int i,count=0;
clrscr();
scanf("%[^\n]s",a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
{
count++;
}
}
if(count>0)
{
printf("yes");
}
else
{
printf("not");
}
getch();
}
