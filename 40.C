#include<stdio.h>
int main()
{
int N,i,j,c=0;
scanf("%d",&N);
for(i=0;i<=N;i++)
{
    for(j=N;j>=0;j--)
    {
    if((i*1)+(j*2)==N)
        {
        c=c+1;
        }
    }
}
printf("%d",c);
return 0;
}
