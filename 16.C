#include<stdio.h>
#include<conio.h>
void main()
{
   int a[1000],n,i,j;
   scanf("%d",&n);
   for(i=0;i<n;i++){
       scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++)
   {
       for(j=i+1;j<n;j++)
       {
           if(a[i]==a[j])
           {
               a[i]='$';
           }
           a[j]='$';
       }
   }
   for(i=0;i<n;i++)
   {
       if(a[i]!='$')
       printf("%d",a[i]);
   }
   getch();
}
