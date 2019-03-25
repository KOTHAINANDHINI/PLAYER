#include<stdio.h>
int main()
{
    int n,k,a[1000],i,l=0;
   scanf("%d",&n);
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            l++;
        }
    }
    if(l>0)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
