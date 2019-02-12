#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,sub;
    clrscr();
    scanf("%d %d",&a,&b);
    while(b>a)
    {
    sub=a-b;
    if(sub>0)
    {
        sub=sub;
    }
    else
    {
        sub=-(sub);
    }
    printf("%d",sub);
    }
getch();
}
