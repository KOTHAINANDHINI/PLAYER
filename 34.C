#include<stdio.h>
#include<conio.h>
void main()
{
    int i;
    char a[100];
    scanf("%s",a);
    for(i=0;a[i]!='\0';i=i+3)
    {
        printf("%c",a[i]);
    }
    getch();
}
