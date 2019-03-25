#include<stdio.h>
int main()
{
    int a,b,c,i,j,n,bi=1,bin=0,l=0;
    scanf("%d %d",&a,&b);
    c=a^b;
    while(c)
    {
        i=c%2;
        c=c/2;
        bin=bin+bi*i;
        bi=bi*10;
    }
    while(bin)
    {
        j=bin%10;
        if(j==1)
        {
            l++;
        }
        bin=bin/10;
    }
    printf("%d",l);
    return 0;
}
