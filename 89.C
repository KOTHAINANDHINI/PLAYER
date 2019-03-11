#include<stdio.h>
int main()
{
    int n,k,h=1,f=1,r=1,i,j,m;
    scanf("%d %d",&n,&k);
    m=n-k;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    for(i=1;i<=m;i++)
    {
        r=r*i;
    }
     for(i=1;i<=k;i++)
    {
        h=h*i;
    }
     int p;
    p=f/r;
    printf("%d\n",p);
    return 0;
}
