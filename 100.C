#include<stdio.h>

int main()
{
   long int r,b=1,n,bin=0;
   scanf("%d",&n);
   while(n)
   {
       r=n%10;
       n=n/10;
       bin=bin+(b*r);
       b=b*2;
   }
   printf("%lX",bin);
   return 0;
}
