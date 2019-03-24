#include <stdio.h>

int main() 
{
	int n,l,r,i;
	scanf("%d %d %d",&n,&l,&r);
	int a[100];
	for(i=0;i<n;i++)
	{
		scanf("%d ",&a[i]);
	}
	int s=a[l-1];
	for(i=l-1;i<r;i++)
	{
		if(a[i]<=s)
		{
			s=a[i];
		}
	}
	printf("%d",s);
	return 0;
}
