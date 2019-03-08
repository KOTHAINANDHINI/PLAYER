#include <stdio.h>

int main(void) 
{
	int n,k,m=0;
	scanf("%d %d",&n,&k);
	int array[n],i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	for(i=0;i<n;i++)
	{
		if(array[i]-array[i+1]==k)
		{
			printf("%d",array[i]);
			break;
		}
		else
		{
		    m++;
		}
	}
	if(m==n)
	{
	    printf("%d",n);
	}
	return 0;
}
