#include<stdio.h>

int main()
{
   int n,k,i,t,l=0,a[1000],j;
   scanf ("%d %d",&n,&k);
   while(n)
   {
       t=n%10;
       a[l]=t;
       n=n/10;
       l++;
   }
   for(i=0;i<l;i++)
   {
       if(a[i]>=0&&a[i]<=k)
       {
           j++;
       }
       
   }
   if(l==j)
   {
       printf("yes");
   }
   else
   {
       printf("no");
   }
   return 0;
}
