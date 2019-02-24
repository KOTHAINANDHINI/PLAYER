#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char a[1000],b[1000];
    int i,j,l1,l2,m=0;
    scanf("%s%s",a,b);
    l1=strlen(a);
    l2=strlen(b);
    if(l1==l2)
    {
        for(i=0;i<l1;i++)
        {
            for(j=0;j<l2;j++)
            {
                if(a[i]!=b[j])
                {
                    m=1;
                    break;
                }
            }
        }
     if(m==0)
       {
        printf("yes");
       }
       if(m==1)
       {
           printf("no");
       }
    }
    else
    {
        printf("no");
    }
    getch();
}
