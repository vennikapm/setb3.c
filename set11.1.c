#include<stdio.h>
#include<conio.h>
void main()
{
char a[100];
int i,n,count=0;
clrscr();
scanf("%s",a);
scanf("%d",&n);
for(i=0;a[i]!='\0';i++)
{
    count++;
}
for(i=count;i>=n;i--)
{
    printf("%s",a);
}
getch();
}
