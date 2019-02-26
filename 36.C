#include<stdio.h>
int main()
{
    long int N,K,r,a;
    scanf("%ld %d",&N,&K);
    a=N;
    int i=0;
    while(a)
    {
        r=a%10;
        if(r==K)
        i++;
        a=a/10;
    }
    printf("%d",i);
      return 0;
}
