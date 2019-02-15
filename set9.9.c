#include<stdio.h>
#include<conio.h>
void main()
{
char a[100];
int i,temp,j;
scanf("%s",a);
for(i=0;a[i]!='\0';i++)
{
for(j=i+1;a[j]!='\0';j++)
{
if(a[j]<a[i])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
printf("%s",a);
getch();
}
