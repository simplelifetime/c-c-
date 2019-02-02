#include<stdio.h>
#define change 1
int main()
{
	char c;
	int n,i,flag;
	scanf("%d",&n);
	getchar();
	for(i=1; i<=n; i++)
	{
		flag=0;
		c=getchar();
		flag=(int)c%2;
		if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
		{
			if(flag==1)
			{
				if(c>=97)
					c=c-32;
				else
					c=c+32;
			}
			putchar(c);
		}
		else
			putchar(c);
		while((c=getchar())!='\n')
		{
			if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
			{
				if(flag==1)
				{
					if(c>=97)
						c=c-32;
					else
						c=c+32;
				}
				putchar(c);
			}
			else
				putchar(c);
		}
		printf("\n");
	}
}
