#include<stdio.h>
#include<conio.h>
void main()
{
    int b[1000],N,K,i,j;
    scanf("%d%d",&N,&K);
    for(i=0;i<N;i++)
    {
        scanf("%d",&b[i]);
    }
    int t;
    for(i=0;i<N;i++)
    {
        for(j=i+1;j<N;j++)
        {
            if(b[i]>b[j])
        {
            t=b[i];
            b[i]=b[j];
            b[j]=t;
        }
        }
    }
    for(i=0;i<N;i++)
    {
        if(b[i]<K)
        {
            printf("%d ",b[i]);
        }
    }
    getch();
}
