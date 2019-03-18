#include<stdio.h>

int main()
{
   int l,r,a[1000],j,k=0;
   scanf("%d %d",&l,&r);
   for(j=l;j<r;j++)
   {
       if(j%2!=0)
       {
           k=k+j;
       }
   }
   printf("%d",k);
   return 0;
}
