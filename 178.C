#include<stdio.h>
int main()
{
    char a[100],b[100],temp;
    int i,j;
    scanf("%s %s",a,b);
    for(i=0;a[i]!='\0';i++)
    {
        for(j=0;b[j]!='\0';j++)
        {
            if(a[i]==b[j])
            {
                a[i]=a[i]-32;
                b[j]=b[j]-32;
            }
        }
    }
    for(i=0;a[i]!='\0';i++)
    {
        printf("%c",a[i]);
    }
    printf(" ");
     for(i=0;b[i]!='\0';i++)
    {
        printf("%c",b[i]);
    }
    return 0;
}
