#include <stdio.h>
int main() 
{
    int a[1000],i,n,k=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        k=k+a[i];
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]+k);
    }
    return 0;
