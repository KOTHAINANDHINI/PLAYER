#include<stdio.h>
#include<conio.h>
void main()
{
    int a[2],b[2],c[2],i,n=2;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&c[i]);
    }
    if(a[0]==b[0]&&a[0]==c[0]||a[1]==b[1]&&a[1]==c[1])
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    getch();
}
