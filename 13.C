#include<stdio.h>
#include<conio.h>
void main()
{
    int a,t,s=0;
    scanf("%d",&a);
    t=a;
    while(a)
    {
        t=a%10;
        s=s+t*t;
        a=a/10;
    }
    printf("%d",s);
    getch();
}
