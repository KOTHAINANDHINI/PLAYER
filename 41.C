#include<stdio.h>
#include<conio.h>
void main()
{
    int N,k,i,p=1,l=0;
    scanf("%d%d",&N,&k);
    for(i=0;i<N/2;i++)
    {
        p=p*k;
        if(p==N)
        {
            printf("yes");
            break;
        }
        
    }
    if(p!=N)
    {
        printf("no");
    }
    getch();
}
   
