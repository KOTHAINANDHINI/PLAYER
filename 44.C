#include<stdio.h>
#include<conio.h>
void  main()
{
  char a[1000];
  scanf("%s",a);
  int i,k,l=0;
  scanf("%d",&k);
  for(i=0;a[i]!='\0';i++)
  {
      l++;
  }
  for(i=k;i<l;i++)
  {
     printf("%c",a[i]);
  }
  for(i=0;i<k;i++)
  {
      printf("%c",a[i]);
  }
  getch();
}
