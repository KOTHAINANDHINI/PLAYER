#include<stdio.h>
int main()
{
    int a[100],n,i,j,p,c=a[0];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
   for(j=0;j<n+1-2;j++)
   {
       c=a[0];
      for(i=0;i<n;i++)
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
