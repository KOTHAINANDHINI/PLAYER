#include <stdio.h>

int main() 
{
	int n,k;
	scanf("%d %d",&n,&k);
	int a[100],i,j,c,b[100],m=0,c1=0,temp,l;
	for(i=0;i<n;i++)
	{
		scanf("%d ",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		c=1;
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				c++;
				a[j]='+';
			}
		}
		if(c<k && a[i]!='+')
		{
			b[m]=a[i];
			m++;
			c1++;
		}
	}
	for(m=0;m<c1;m++)
	{
		for(l=m+1;l<c1;l++)
		{
			if(b[m]>b[l])
			{
				temp=b[m];
				b[m]=b[l];
				b[l]=temp;
			}
		}
	}
	for(m=0;m<c1;m++)
	{
		printf("%d ",b[m]);
	}
	return 0;
}
