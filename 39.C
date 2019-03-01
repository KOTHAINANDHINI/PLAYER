#include<stdio.h>
int main()
{
    int a,i,p=1,l=0;
    scanf("%d",&a);
    for(i=0;i<=a/2;i++)
    {
        p=p*2;
        if(a==p)
        {
            l=1;
            break;
        }
    }
    if(l==1||a==1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
