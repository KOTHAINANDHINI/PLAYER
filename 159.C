#include<stdio.h>
int main()
{
    int a[1000],i,n,j,k,b=1,bin=0;
    scanf("%d %d",&n,&k);
   j=n*k;
   while(j)
   {
       int r=j%2;
       j=j/2;
       bin=bin+b*r;
       b=b*10;
   }
   while(bin)
   {
      j=bin%10;
      bin=bin/10;
      if(j==1)
      {
          i++;
      }
   }
   printf("%d",i);
   return 0;
}
