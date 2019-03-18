#include<stdio.h>

int main()
{
   int r,b=1,n,bin=0,L=0;
   scanf("%d",&n);
   while(n)
   {
       r=n%2;
       n=n/2;
       bin=bin+b*r;
       b=b*10;
       L++;
   }
   printf("%d",L);
   return 0;
}
