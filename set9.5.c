#include<stdio.h>
#include<conio.h>
void main()
{
char a[100],b[100],c[100];
int i,j=0,k=0;
clrscr();
scanf("%s",a);
for(i=0;a[i]!='\0';i++)
{
if(i%2==0)
{
b[k]=a[i];
k++;
}
else
{
c[j]=a[i];
j++;
}
}
printf("%s ",b);
printf("%s",c);
getch();
}
