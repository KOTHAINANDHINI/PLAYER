#include<stdio.h>

int main()
{
   int a[1000],i=0,t,n,p,k,j,l=0;
   scanf("%d %d %d",&n,&p,&k);
   i=0;
   while(n)
   {
       t=n%10;
       a[i]=t;
       i++;
       n=n/10;
       
   }
   for(j=p;j>=0;j--)
   {
       if(j==k)
     printf("%d ",a[j]);
   }
   return 0;
}
