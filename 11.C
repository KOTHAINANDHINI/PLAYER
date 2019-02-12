#include<stdio.h>

int main() {
  char a[100];
  int i,l=0;
  scanf("%s",a);
  for(i=0;a[i]!='\0';i++)
  {
      l++;
  }
  if(a[0]=='s'||a[0]=='S')
  {
      if(l==8||l==6)
      printf("yes");
  }
  else{
      printf("no");
  }
  return 0;
}
