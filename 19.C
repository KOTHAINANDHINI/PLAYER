#include<stdio.h>
int main()
{
    int a,i,b[1000];
    scanf("%d",&a);
    int j=0,k,l;
    for(i=2;i<=a/2;i++)
    {
        if(a%i==0)
        {
            b[j]=i;
            j++;
        }
    }
    
    for(i=0;i<j;i++)
    {
        for(k=2;k<=b[i]/2;k++)
        {
            if(b[i]%k==0){
                l=1;
                b[i]='$';
            }
        }
    }
    for(i=0;i<j;i++)
    {
        if(b[i]!='$')
        printf("%d ",b[i]);
    }
    return 0;
}
