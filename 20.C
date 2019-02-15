#include<stdio.h>
#include<conio.h>
void main()
{
    char a[1000];
    int i;
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        a[i]=a[i]+3;
    }
    for(i=0;a[i]!='\0';i++)
    {
        printf("%c",a[i]);
    }
    getch();
}
