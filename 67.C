#include<stdio.h>
#include<conio.h>
void main()
{
   int N,i,f=1;
   scanf("%d",&N);
   for(i=1;i<=N;i++)
   {
       f=f*i;
   }
   printf("%d",f);
   getch();
}
