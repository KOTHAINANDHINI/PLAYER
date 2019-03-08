#include<stdio.h>
#include<conio.h>
void main()
{
    int b[1000],N,i;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&b[i]);
    }
   
    for(i=0;i<N;i++)
    {
        if(b[i]<N)
        {
            printf("%d ",b[i]);
        }
    }
    getch();
}
