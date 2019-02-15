#include<stdio.h>

int main() {
  char b[100];
  int i,l=0,k=0;
  scanf("%s",b);
  for(i=0;b[i]!='\0';i++)
  {
      l++;
  }
  if(b[0]=='s'||b[0]=='S'&&l==8||l==6&&b[l-1]=='y'||'Y')
  {
   for(i=0;i<l;i++)
   {
     if(b[1]=='a'||'A'&&b[2]=='t'||'T'&&b[3]=='u'||'U'&&b[4]=='r'||'R'&&b[5]=='d'||'D'&&b[6]=='a'||'A'||b[1]=='u'||'U'&&b[2]=='n'||'N'&&b[3]=='d'||'D'&&b[4]=='a'||'A')
       {
         k++;
       }
   }
  }
  if(k==l)
  printf("yes");
   else{
     printf("no");
   }
  getch();
}
