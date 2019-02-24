#include<stdio.h>
#include<conio.h>
void main()
{
    int a[1000],i,j,l=0,N,c;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    c=a[0];
    for(i=1;i<N;i++)
    {
        if(c>a[i])
        l=1;
    }
    if(l==0)
    {
        printf("yes");
    }
    if(l==1)
    {
        printf("no");
    }
    getch();
}
