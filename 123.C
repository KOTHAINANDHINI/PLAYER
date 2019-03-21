#include<stdio.h>

int main() 
{
    int a[1000],n,i,j,l=0,f=0;
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
       if(n%i==0)
       {
          for(j=2;j<=i/2;j++)
          {
              f=0;
              if(i%j==0)
              {
                  f=1;
                  break;
              }
          }
          if(f==0)
           {
              printf("%d ",i);
           }
       }
    }
return 0;
}
