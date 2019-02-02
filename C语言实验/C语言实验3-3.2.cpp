#include<stdio.h>
int main()
{
	char c;
	int n,i;
	int ok=0;   //判断该空格是否有效 
	scanf("%d",&n);
	getchar();
	for(i=1;i<=n;i++)
	{
		ok=0;
	scanf("%c",&c);
	while(c!='\n')
		{
			if(c==' ')
			{
				if(ok==1)    //若ok=1，该空格无效，跳入下一次循环 
				{
					c=getchar();
					continue;
				}
				else
				{
					putchar(' ');    //若ok=0，该空格有效，输出空格，令ok=1，后续空格无效 
					ok=1;
				}
			}
			else
			{
				putchar(c);
				ok=0;
			}
			c=getchar();
		}
		printf("\n");
	}
}

