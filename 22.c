#include<stdio.h>
int main()
{
    int a,b,c,i=1,j=0,k=0,d[100];
    scanf("%d%d",&a,&b);
    while(i<=a&&i<=b)
    {
        if(a%i==0&&b%i==0)
        {
            d[j]=i;
            j++;
        }
        i++;
    }
    for(i=0;i<j;i++)
    {
        if(d[i]>k)
        {
            k=d[i];
        }
    }
    printf("\n%d",k);
    return 0;
}
