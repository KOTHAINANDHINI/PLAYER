#include<stdio.h>
int main()
{
    int n,dec=0,i,j=1,b=1;
    scanf("%d",&n);
    while(n)
    {
        j=n%10;
        n=n/10;
        dec=dec+j*b;
        b=b*2;
    }
    for(i=0;i<dec;i++)
    {
        j=j*2;
        if(j==dec||j>dec)
        {
            printf("%d",j);
            break;
        }
    }
    return 0;
}
