#include<stdio.h>
#include<conio.h>
void main()
{
int i,j=0;
char a[100],b[100];
clrscr();
scanf("%[^\n]s",a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]!=' ')
{
b[j]=a[i];
j++;
}
}
b[j]='\0';
printf("%s",b);
getch();
}
