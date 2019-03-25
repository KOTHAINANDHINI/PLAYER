#include <stdio.h>

int main() 
{
	int n,m,i,j,rem,pro,a[20],c=0,c1=0,temp,pos=0;
	scanf("%d %d",&n,&m);
	pro=n*m;
	while(pro!=0)
	{
		rem=pro%2;
		a[i]=rem;
		i++;
		c++;
		pro=pro/2;
	}
	
	i=0;j=c-1;
	while(i<j)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
		i++;
		j--;
	}
	for(i=0;i<c;i++)
	{
		pos++;
		if(a[i]==1)
		{
			c1++;
		}
		if(c1==2)
		{
			printf("%d",pos);
			break;
		}
	}
	return 0;
}
