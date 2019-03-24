#include<stdio.h>
int main()
{
    int a[1000],i,k=0,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
       scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        k=k+a[i];
        printf("%d ",k);
    }
    return 0;
}
