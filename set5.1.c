#include<stdio.h>
#include<conio.h>
void main()
{
int n,i;
char a[100];
clrscr();
scanf("%d",&n);
scanf("%s",a);
for(i=1;i<=n;i++)
{
printf("%s/n",a);
}
getch();
}
