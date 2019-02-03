#include<stdio.h>
#include<conio.h>
void main()
{
int i,n;
char a[100],b[100];
scanf("%s",a);
scanf("%d",&n);
for(i=0;i<n;i++)
{
b[i]=a[i];
}
b[i]='\0';
printf("%s",b);
getch();
}
