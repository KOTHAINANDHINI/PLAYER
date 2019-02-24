#include<stdio.h>
#include<conio.h>
void main()
{
    int a[100];
    int N,k,i;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
        for(i=0;i<N;i++)
        {
            if(a[i]==0)
            {
                k=i;
            }
        }
    for(i=0;i<k;i++)
    {
        if(a[i]!=0&&a[i]==1)
        {
            printf ("%d",a[i]);
        }
    }
    getch();
}
