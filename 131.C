#include<stdio.h>
int main()
{
    int a[1000],i=0,k=0,n,s=0;
    scanf("%d",&n);
    while(n)
    {
        a[k]=n%10;
        k++;
        n=n/10;
    }
    for(i=0;i<k;i++)
    {
        if(a[i]%2!=0)
        {
            s=s+a[i];
        }
    }
    if(s%2==0)
    {
        printf("E");
    }
    else
    {
        printf("O");
    }
    return 0;
}
