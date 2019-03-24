#include<stdio.h>

int main() {
int a[100],i,j,c,l=1,n;
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
    for(j=i+1;j<n;j++)
    {
        c=a[i]&a[j];
    }
    if(c>l)
    {
        l=c;
    }
}
printf("%d",l);
return 0;
}
