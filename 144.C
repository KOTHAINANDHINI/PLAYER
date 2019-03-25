#include<stdio.h>
int main()
{
    int a[100],b[100],i,j,l=0,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i+1]%a[i]==0)
        {
            b[l]=a[i+1];
            l++;
        }
    }
    for(j=0;j<l;j++)
    {
        printf("%d ",b[j]);
    }
    return 0;
}
