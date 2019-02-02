#include<stdio.h>
#include<conio.h>
void main()
{
int n,num;
clrscr();
scanf("%d",&n);
while(n>0)
{
scanf("%d",&num);
if(num>=0&&num<=10)
{
if(num==1)
{
printf("one");
}
else if(num==2)
{
printf("two");
}
else if(num==3)
{
printf("three");
}
else if(num==4)
{
printf("four);
}
else if(num==5)
{
printf("five");
}
else if(num==6)
{
printf("six");
}
else if(num==7)
{
printf("seven");
}
else if(num==8)
{
printf("eight");
}
else if(num==9)
{
printf("nine");
}
else if(num==10)
{
printf("ten");
}
}
else
{
printf("inval");
}
n--;
}
getch();
}
