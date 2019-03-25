#include<stdio.h>
int main()
{
    int n,k,a[1000],i,l=0,j;
   scanf("%d",&n);
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]!=k)
        {
            l++;
        }
        else
        {
           j=1;
        }
    }
    if(l==n)
    {
        for(i=0;i<n;i++)
        {
            if(a[i]>k)
            {
                printf("%d",a[i]);
                break;
            }
        }
    }
    if(j==1)
    {
        printf("%d",k);
    }
    return 0;
}
