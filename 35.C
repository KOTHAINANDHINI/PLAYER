#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000],b[1000];
    gets(a);
    int i,j,k=0,c,l=0;
    c=strlen(a);
    l=0;
    for(i=0;a[i]!='\0';i++)
    {
        for(j=i+1;a[j]!='\0';j++)
        {
            if(a[i]==a[j])
            {
                a[j]='$';
                k=a[i];
            }
        }
           
         if(a[i]!='$'&&a[i]!=k)
            {
                b[l]=a[i];
                l++;
            }
    }
            
    for(i=0;i<l;i++)
        {
             printf(" %c ",b[i]);
         }
    return 0;
}
