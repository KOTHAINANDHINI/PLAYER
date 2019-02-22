#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,l=0,i,j;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        for(j=1;j<=i/2;j++)
        {
            if(i%j==0&&j*j==i)
            {
                l++;
            }
        }
    }
    printf("%d",l);
    getch();
}
