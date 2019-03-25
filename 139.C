#include<stdio.h>
int main()
{
     int n,i,k=1,b=1,bin=0,l=0;
    scanf("%d",&n);
    while(n)
    {
        k=n%2;
        bin=bin+b*k;
        b=b*10;
        n=n/2;
    }
    while(bin)
    {
        k=bin%10;
        if(k==1)
        {
            l++;
        }
        bin=bin/10;
    }
    printf("%d",l);
    return 0;
}
