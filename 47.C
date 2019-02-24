#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>0&&b>0&&c>0&&a+b+c==180)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    getch();
}
