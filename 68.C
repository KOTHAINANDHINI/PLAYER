#include<stdio.h>
int main()
{
    int a[1000],b,n;
    scanf("%d",&n);
    int i,j,k=0,c=0;
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
                k++;
            }
        }
           
         if(k>c)
            {
              c=k;
            }
    }
    printf("%d",c);
    return 0;
}
