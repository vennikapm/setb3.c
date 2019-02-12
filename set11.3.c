#include<stdio.h>
#include<conio.h>
void main()
{
    char a[100];
    int i;
    clrscr();
    scanf("%[^\n]s",a);
    a[0]=a[0]-32;
    for(i=1;a[i]!='\0';i++)
    {
        if(a[i]==' ')
        {
            a[i+1]=a[i+1]-32;
        }
    }
    printf("%s",a);
    getch();
}        
