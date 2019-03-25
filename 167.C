#include<stdio.h>

int main() 
{
    char a[1000];
    int i,j,f=0,l=0;
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        l++;
    }
    for(i=2;i<=l/2;i++)
    {
        if(l%i==0)
        {
            f=1;
            break;
        }
    }
    if(f==0)
    {
        printf("%d",l);
    }
    else
    {
        printf("no");
    }
    return 0;
}
