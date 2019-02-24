#include<stdio.h>
#include<conio.h>
void  main()
{
  int p,a,i,j,g,b,c=0;
  scanf("%d %d",&p,&a);
  for(i=0;i<p;i++)
  {
    for(j=0;j<p;j++)
    {
     g=2*(i+j);
     b=i*j;
     if(p==g&&a==b)
      {
        c=1;
      }
    }
  }
  if(c==1)
  {
    printf("yes");
  }
  else
  {
    printf("no");
  }
  getch();
}
