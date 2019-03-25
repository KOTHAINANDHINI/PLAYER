#include<stdio.h>
int main()
{
    int n,i,j,k=1;
    scanf("%d",&n);
       if(n%2==0)
       {
           for(i=1;i<n/2;i++)
           {
               k=k*2;
               if(k==n)
               {
                   printf("yes");
                   break;
               }
           }
           if(k!=n)
           {
               printf("no");
           }
       }
       else
       {
           printf("no");
       }
       return 0;
}
