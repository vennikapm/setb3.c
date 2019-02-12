#include<stdio.h>
#include<conio.h>
void main()
{
    int n,ans;
    clrscr();
    scanf("%d",&n);
    ans=n/2;
    if(n%2==0)
    {
    printf("%d",ans);
    }
    else
    {
        printf("%d",n);
    }
getch();
}
