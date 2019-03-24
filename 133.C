#include <stdio.h>
int main()
{
    int n,m,a[n],b[n],i,flag=0;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&a[i],&b[i]);
    }
   for(i=0;i<n;i++)
    {
        if(a[i]>=0)
        {
            if(b[i]==m)
            {
                printf("yes",m);
                flag=1;
            }
        }
    }
    if(flag!=1)
        printf("no",m);
	return 0;
}
