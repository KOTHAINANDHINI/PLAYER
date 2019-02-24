#include<stdio.h>
int main()
{
    int a[100],N,K,i,j,p,c=a[0];
    scanf("%d%d",&N,&K);
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
   for(j=0;j<N+1-K;j++)
   {
       c=a[0];
      for(i=0;i<N;i++)
     {
         if(a[i]>c)
         {
           c=a[i];
           p=i;
         }
     }
      a[p]=0;
          
   }
   printf("%d",c);
   return 0;
}
