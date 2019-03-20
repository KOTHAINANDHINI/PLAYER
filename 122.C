#include <stdio.h>
#include<string.h>
int main() 
{
	char str[20];
	scanf("%s",str);
	int len,flag;
	len=strlen(str);
	if(str[0]<'4' && str[1]<='9' && str[2]=='-' && str[3]<'2' && str[4]<'9' && str[5]=='-' && str[6]<='9' && str[7]<='9' && str[8]<='9' && str[9]<='9')
	{
		flag=1;
	}
	else
	{
		flag=0;
		
	}
	if(flag==1)
	{
	 if(str[3]=='0'&&str[4]=='1')
	    printf("January");
	if(str[3]=='0'&&str[4]=='2')
	 printf("February");
	 if(str[3]=='0'&&str[4]=='3')
	 printf("March");
	 if(str[3]=='0'&&str[4]=='4')
	 printf("April");
	 if(str[3]=='0'&&str[4]=='5')
	 printf("May");
	 if(str[3]=='0'&&str[4]=='6')
	 printf("June");
	 if(str[3]=='0'&&str[4]=='7')
	 printf("July");
	 if(str[3]=='0'&&str[4]=='8')
	 printf("August");
	 if(str[3]=='0'&&str[4]=='9')
	 printf("September");
	 if(str[3]=='1'&&str[4]=='0')
	 printf("October");
	 if(str[3]=='1'&&str[4]=='1')
	 printf("November");
	 if(str[3]=='1'&&str[4]=='2')
	 printf("December");   
	}
	else
	{
	    printf("invalid");
	}
	return 0;
}
