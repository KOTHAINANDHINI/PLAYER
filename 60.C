#include<stdio.h>
#include<string.h>
void main()
{
    char a[100],b[100];
    int i,j,k=0,l;
    l=strlen(a);
    scanf("%s",a);
    scanf("%s",b);
    for(i=0;a[i]!='\0';i++)
    {
        for(j=0;b[j]!='\0';j++)
        {
            if(a[i]==b[j])
            {
                k++;
            }
        }
    }
    if(k==0)
    {
        printf("no");
    }
    if(k>=1)
    {
        printf("yes");
    }
    getch();
}
