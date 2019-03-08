#include<stdio.h>
int main()
{
    int a[1000],i,n,j,k=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
            if(a[i]<a[i+1])
            {
                k++;
            }
    }
    printf("%d",k);
    return 0;
}
