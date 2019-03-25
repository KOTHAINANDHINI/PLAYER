#include<stdio.h>

int main()
{
char a[100],b[100];
int i,k,j;
printf("\nenter the string:\n");
scanf("%[^\n]s",a);
k=0;
for(i=0;a[i]!='\0';i++)
{
 if(a[i]!=' ')
 {
 b[k]=a[i];
 k++;
 }
 else
 {
 b[k]='\0';
 for(j=k-1;j>=0;j--)
 {
 printf("%c",b[j]);
 }
 k=0;
 printf(" ");
}
}
return 0;
}
