#include<stdio.h>
int main()
{
    char a[100];
    int i,l=0,k=0;
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o')
        {
            l++;
        }
        else
        {
            k++;
        }
        
    }
    printf("%d",k*l);
    return 0;
}
