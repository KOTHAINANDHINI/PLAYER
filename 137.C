#include<stdio.h>
int main()
{
     int n,i,k=1,b=1,bin=0,l=1,a[100];
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
        a[l]=k;
        l++;
        bin=bin/10;
    }
   for(i=1;i<=l;i++)
   {
       if(a[i]==1)
       {
           printf("%d",i);
           break;
       }
   }
    return 0;
}
