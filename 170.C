#include<stdio.h>
int main()
{
    char a[1000],b;
   scanf("%s",a);
    int i,j,k=0,c=0;
    for(i=0;a[i]!='\0';i++)
    {
        for(j=i+1;a[j]!='\0';j++)
        {
            if(a[i]==a[j])
            {
                k++;
            }
        }
           
         if(k>c)
            {
              c=k;
             b=a[i];
            }
    }
    printf("%d %c",k,b);
    return 0;
}
