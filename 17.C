#include<stdio.h>
int main()
{
    int a[1000],i,j=0,L,R,c;
    scanf("%d%d",&L,&R);
    j=0;
    for(i=L;i<=10000;i++)
    {
        if(i%L==0 && i%R==0)
        {
            a[j]=i;
            j++;
        }
    }
        printf("%d",a[0]);
    return 0;
}
