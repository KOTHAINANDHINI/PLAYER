#include<stdio.h>
#include<conio.h>
void main()
{
    char a[100];
    int i,k=0,l=0;
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        l++;
    }
    for(i=0;i<l;i++)
    {
        if(a[i]>='0'&&a[i]<='9')
        k++;
    }
    if(k==l)
    printf("yes");
    else
    printf("no");
    getch();
}
