#include <stdio.h>
#include<string.h>
int main() 
{
	char str[20];
	scanf("%s",str);
	int len,flag;
	len=strlen(str);
	if(str[0]<'4' && str[1]<='9' && str[2]=='/' && str[3]<'2' && str[4]<'9' && str[5]=='/' && str[6]<='9' && str[7]<='9' && str[8]<='9' && str[9]<='9')
	{
		flag=1;
	}
	else
	{
		flag=0;
		
	}
	if(flag==0)
	{
		printf("no");
	}
	if(flag==1)
	{
		printf("yes");
	}
	
	return 0;
}
