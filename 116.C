#include<stdio.h>

int main()
{
    int a[1000],i,n,j,t;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                a[j]='$';
            }
        }
    }
    int b[1000];
    j=0;
for(i=0;i<n;i++)
{
        if(a[i]!='$')
        {
            b[j]=a[i];
            j++;
        }
    }
    for(i=0;i<j;i++)
    {
        for(k=i+1;k<j;k++)
        {
            if(b[i]<b[k])
            {
                t=b[i];
                b[i]=b[k];
                b[k]=t;
            }
        }
    }
    for(i=0;i<j;i++)
    {
        printf("%d",b[i]);
    }
    return  0;
}
