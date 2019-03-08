#include<stdio.h>
int main()
{
    int a[1000],i,j,c=0,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>c)
        {
            c=a[i];
        }
    }
    printf("%d",c);
    return 0;
}
