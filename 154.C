#include<stdio.h>
int main()
{
    char a[100];
    int i,k;
    scanf("%s %d",a,&k);
    for(i=k-1;a[i]!='\0';i=i+k)
    {
      if(a[i]>=97&&a[i]<=122)
      {
          a[i]=a[i]-32;
      }
    }
    printf("%s",a);
    return 0;
}
