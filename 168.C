#include<stdio.h>
int main()
{
    char a[1000];
    int i,m,j;
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>='1' && a[i]<='9')
        {
            m=a[i]-48;
            for(j=0;j<m;j++)
            {
                printf("%c",a[i-1]);
            }
        }
    }
    return 0;
}
