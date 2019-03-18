#include<stdio.h>

int main()
{
    int a,b,c,i,j,p=1;
    scanf("%d %d %d",&a,&b,&c);
    for(i=0;i<b;i++)
    {
        p=p*a;
    }
    j=p%c;
    printf("%d",j);
    return 0;
}
