#include<stdio.h>
int main()
{
    int a[1000],i=1,n,j,k,b=1,bin=0;
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
     a[i]=j;
     i++;
   }
   b=i;
   for(i=1;i<=b;i++)
   {
       if(a[i]==1)
       {
           printf("%d",i);
           break;
       }
   }
   return 0;
}
