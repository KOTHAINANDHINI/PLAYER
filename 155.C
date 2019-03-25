#include<stdio.h>
int main()
{
    int a[1000],i,n,j,k;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<k;i++)
    {
        if(a[i]>a[i+1])
        {
            j=a[i];
            a[i]=a[i+1];
            a[i+1]=j;
        }
    }
    for(i=k;i<n;i++)
    {
        if(a[i]<a[i+1])
        {
            j=a[i];
            a[i]=a[i+1];
            a[i+1]=j;
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
