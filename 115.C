#include<stdio.h>

int main()
{
   char a[1000],b[1000];
   int i,j,k=0,l=0;
   scanf("%s",a);
   scanf("%s",b);
   for(i=0;a[i]!='\0';i++)
   {
       k++;
   }
   for(i=0;b[i]!=0;i++)
   {
       l++;
   }
   if(l!=k&&k>l)
   {
       j=k-l;
       for(i=0;i<k-j;i++)
       {
           printf("%c",a[i]);
       }
       printf("%s",b);
   }
   if(l!=k&&l>k)
   {
       printf("%s",a);
       j=l-k;
       for(i=0;i<l-j;i++)
       {
           printf("%c",b[i]);
       }
   }
   if(l==k)
   {
       printf("%s%s",a,b);
   }
   return 0;
}
