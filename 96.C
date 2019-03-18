#include<stdio.h>

int main()
{
   int a[1000],i=0,t,n,k=0,j;
   scanf("%d",&n);
   i=0;
   while(n)
   {
       t=n%10;
       a[i]=t;
       i++;
       n=n/10;
       
   }
   for(j=i-1;j>=0;j--)
   {
       if(j==0||j==i-1)
       {
           k=k+a[j];
       }
   }
   printf("%d",k);
   return 0;
}
