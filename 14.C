#include<stdio.h>
#include<conio.h>
void main()
{
    char a[1000];
    int i,l=0,n;
    scanf("%d",&n);
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        l++;
    }
    if(l==n){
     for(i=l-1;i>=0;i--){
         if(a[i]!='a'&&a[i]!='e'&&a[i]!='i'&&a[i]!='o'&&a[i]!='u'&&a[i]!='A'&&a[i]!='E'&&a[i]!='I'&&a[i]!='O'&&a[i]!='U')
         printf("%c",a[i]);
     }   
    }
 
    getch();
}
