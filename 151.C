#include<stdio.h>
int main()
{
    char a[100];
    int i,l=0;
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]!='a'&&a[i]!='b')
        {
            l++;
        }
    }
    if(l==0||l==1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
