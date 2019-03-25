#include<stdio.h>

int main()
{
    char a[1000];
    int i,n,j,l,c=0;
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        c=0;
        for(j=i;a[j]!='\0';j++)
        {
            if(a[i]==a[j])
            {
                c++;
                break;
            }
        }
        if(a[i]!='\0')
        {
        printf("%c%d",a[i],c);
        }
    }
    return 0;
}
