#include<stdio.h>
int main()
{
    int a[1000],i,j,k=0;
    scanf("%d",&j);
    for(i=0;i<j;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<j;i++)
    {
        k=k|a[i];
    }
    printf("%d",k);
    return 0;
}
