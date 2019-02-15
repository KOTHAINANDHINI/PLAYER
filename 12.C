#include<stdio.h>
#include<conio.h>
void main()
{
    int i,a[1000],n,k,j,t=0;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    while(k)
    {
        for(i=n-1;i>0;i--)
        {
         for(j=i-1;j<n;j++)
         {
             t=a[j];
             a[j]=a[j-1];
             a[j-1]=t;
         }
        }
        k--;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    getch();
}
