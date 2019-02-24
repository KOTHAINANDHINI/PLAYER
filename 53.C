#include<stdio.h>
int main()
{
   char a[1000],i,l=0;
   scanf("%s",a);
   for(i=0;a[i]!='\0';i++)
   {
       l++;
   }
   printf("%d",l);
   return 0;
}
