#include<stdio.h>
int main()
{
    int a,i,b=1;
    scanf("%d",&a);
    for(i=1;i<a/2;i++)
    {
        if(a%i==0)
        {
            b=a/i;
            if(b%2==1)
            {
                printf("%d",i);
                break;
            }
        }
    }
    return 0;
}
