#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000],b[1000],m,n;
    int i,j,k,l;
    scanf("%s %s",a,b);
    k=strlen(a);
    l=strlen(b);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>=97&&a[i]<=122)
        {
            m=a[i];
            n=a[i]-32;
            a[i]=n;
        }
    }
    for(j=0;a[j]!='\0';j++)
    {
        if(b[j]>=97&&b[j]<=122)
        {
            m=b[j];
            n=b[j]-32;
            b[j]=n;
        }
    }
    int f=0;
    if(k==l)
    {
        for(i=0;i<k||i<l;i++)
        {
            if(a[i]==b[i])
            {
                f=f+1;
            }
            else
            {
                f=0;
            }
        }
        if(f>0)
        {
            printf("yes");
        }
        else
        {
            printf("no");
        }
    }
    else
    {
        printf("no");
    }
    return 0;
}
