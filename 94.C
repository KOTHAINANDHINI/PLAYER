#include<stdio.h>

int main()
{
   int a[1000],i=0,k,t,n,j,l=0;
   scanf("%d",&n);
   i=0;
   while(n)
   {
       t=n%10;
       a[i]=t;
       i++;
       n=n/10;
       
   }
   for(k=0;k<i;k++)
   {
      for(j=k+1;j<i;j++)
      {
          if(a[k]==a[j])
          {
              l++;
              break;
          }
      }
   }
   if(l>0)
   {
       printf("yes");
   }
   else
   {
       printf("no");
   }
   return 0;
}
