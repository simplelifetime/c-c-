#include<stdio.h>
int main()
{
	char c;
	int n,i;
	int ok=0;   //�жϸÿո��Ƿ���Ч 
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
				if(ok==1)    //��ok=1���ÿո���Ч��������һ��ѭ�� 
				{
					c=getchar();
					continue;
				}
				else
				{
					putchar(' ');    //��ok=0���ÿո���Ч������ո���ok=1�������ո���Ч 
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

