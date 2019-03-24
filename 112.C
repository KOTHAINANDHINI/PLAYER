#include<stdio.h>

int main() {
int n,a[100],i,s=0;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
 scanf("%d",&a[i]);   
}
for(i=1;i<=n;i++)
{
    s=s+i;
    
}
printf("%d",s);
return 0;
}
   
