#include<stdio.h>
#include<conio.h>
void main()
{
    char a[100];
    int i,j,count=0;
    clrscr();
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        for(j=i+1;a[j]!='\0';j++)
        {
            if(a[i]==a[j])
            {
                count++;
            }
        }
    }
    if(count==0)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    getch();
}
