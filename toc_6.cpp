#include<stdio.h>
#include<string.h>
int main()
{
	char s[20];
	int n,c=0,c0=0,c1=0;
	printf("Enter the string: ");
	scanf("%s",s);
	n=strlen(s);
	for(int i=0;i<n;i++)
	{
		if(s[i]=='0' || s[i]=='1' )
		{
			c=0;
		}
		else
		{
			c=1;
			printf("INVALID");
			break;
		}
	}
	if(c==0)
	{
	for(int i=0;i<n;i++)
	{
		if(s[i]=='0')
		{
			c0++;
		}
		else if(s[i]=='1')
		{
			c1++;
		}
	}
	if(c0==c1)
	{
		printf("The string is accepted");
	}
	else
	{
		printf("The string is not accepted");
	}
	}
}
