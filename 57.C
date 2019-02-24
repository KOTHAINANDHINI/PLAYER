#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000],b;
    scanf("%s",&a);
    scanf("%c",&b);
     int i,l=0;
    for(i=0;a[i]!='\0';i++)
    {
        if(b[0]==a[i])
        {
          a[i]='$';   
        }
    }
    for(i=0;a[i]!='\0';i++)
    {
      if(a[i]=='$') 
      l++;
    }
    printf("%d",l);
   return 0;
}
