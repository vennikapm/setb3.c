#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,add=0;
clrscr();
scanf("%d",&n);
for(i=1;i<=n;i++)
{
add=add+i;
}
printf("%d",add);
getch();
}
