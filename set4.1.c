#include<stdio.h>
#include<conio.h>
void main()
{
int i,count=0;
char a[100];
scanf("%[^\n]s",a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]!=' ')
{
count++;
}
}
printf("%d",count);
getch();
}
