#include<stdio.h>
int main()
{
    char a[100];
    int i,k;
    scanf("%s %d",a,&k);
    for(i=k-1;a[i]!='\0';i=i+k)
    {
     printf("%c ",a[i]);   
    }
    return 0;
}
