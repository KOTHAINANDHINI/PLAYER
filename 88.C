#include<stdio.h>

int main() {
int n,shift,k;
scanf("%d",&n);
scanf("%d",&k);
shift=n>>k;
printf("%d",shift);
return 0;
}
   
