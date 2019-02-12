#include<stdio.h>
#include<conio.h>
void main()
{
   char a[100];
   int i,flag=0;
   clrscr();
   scanf("%s",a);
   for(i=0;a[i]!='\0';i++)
   {
       if(a[i]=='0'||a[i]=='1')
       {
           flag++;
       }
       else
       {
           flag=0;
       }
   }
   if(flag==i)
   {
       printf("yes");
   }
   else
   {
       printf("no");
   }
 getch();
}
