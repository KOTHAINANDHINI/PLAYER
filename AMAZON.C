#include<stdio.h>
int main()
{
  int i=1,j=2,n,b=1,sum=0;
  scanf("%d",&n);
  while(1)
  {
      sum=b*12;
      if(n<=sum)
      {
          printf("%d",i);
          break;
      }
      b=b+j*j;
      j++;
      i++;
  }
  return 0;
}
