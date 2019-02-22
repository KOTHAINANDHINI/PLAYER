#include<stdio.h>
#include<conio.h>
void main()
{
    char a[100],k;
    int i;
    k=' ';
    scanf("%[^\n]",a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==' '&&a[i+1]==' ')
        {
            a[i]='$';
            break;
        }
    }
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]!='$')
        {
            printf("%c",a[i]);
        }
    }
    getch();
}
