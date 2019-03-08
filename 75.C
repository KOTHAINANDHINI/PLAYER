#include<stdio.h>
int main()
{
    int a[1000],i,n,j,k=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                k++;
            }
        }
    }
    printf("%d",k);
    return 0;
}
