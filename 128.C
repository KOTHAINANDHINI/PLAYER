#include<stdio.h>
int main()
{
    int n,a[1000],i,j=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);                     
    }
    for(i=0;i<n;i++)
    {
        j=j*a[i];
    }
    if(j%2==0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
    return 0;
}
