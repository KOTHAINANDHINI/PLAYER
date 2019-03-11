#include<stdio.h>
int main()
{
    int a[1000],b=1,n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        b=b^a[i];
    }
    printf("%d",b);
    return 0;
}
