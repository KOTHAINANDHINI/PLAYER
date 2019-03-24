    
#include <stdio.h>

int main() {
	int a[100];
	int n;
	scanf("%d",&n);
	int i,j,k;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for( j=1;j<100;j++)
	{
		for(i=0;i<n;i++)
		{
			if(a[i]%j!=0)
			{
				break;
			}
			else
			{
				k=j;
			}
		}
	}
	printf("%d",k);
	return 0;
}
