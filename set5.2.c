#include<stdio.h>
#include<conio.h>
void main()
{
char a[100],b[100],c[100],k=0;
int i,j=0,count=0,count1=0;
clrscr();
scanf("%[^\n]s",a);
for(i=0;a[i]!=' ';i++)
{
b[k]=a[i];
k++;
count++;
}
b[k]='\0';
for(i=count+1;a[i]!='\0';i++)
{
c[j]=a[i];
j++;
count1++;
}
c[j]='\0';
if(count>count1)
{
printf("%s",b);
}
else if(count1>count)
{
printf("%s",c);
}
else
{
printf("%s",b);
}
getch();
}
