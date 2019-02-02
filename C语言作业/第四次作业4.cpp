#include<stdio.h>
int main()
{
	double a,b,c;
	int m;
	int ok=0;
	char r;
	while(scanf("%d%lf%lf",&m,&a,&b)!=EOF)
	{
		scanf(" %c",&r);
		switch(r)
		{
			case '+':
				c=a+b;
				break;
			case '-':
				c=a-b;
				break;
			case '*':
				c=a*b;
				break;
			case '/':
				c=a/b;
				break;
		}
		if(m==1)

		{
			switch(r)
			{
				case '+':
					c=a+b;
					break;
				case '-':
					c=a-b;
					break;
				case '*':
					c=a*b;
					break;
				case '/':
					c=a/b;
					break;
			}
			printf("After switch processing,the result is : %.2f\n\n",c);
		}
		else if(m==0)
		{
			if(r=='+')
				c=a+b;
			if(r=='-')
				c=a-b;
			if(r=='*')
				c=a*b;
			if(r=='/')
				c=a/b;
			printf("After if-else processing,the result is : %.2f\n\n",c);
		}
		else if(m==2)
		{
			if(r=='+')
				c=a+b;
			if(r=='-')
				c=a-b;
			if(r=='*')
				c=a*b;
			if(r=='/')
				c=a/b;
			printf("After if-else processing,the result is : %.2f\n",c);
			switch(r)
			{
				case '+':
					c=a+b;
					break;
				case '-':
					c=a-b;
					break;
				case '*':
					c=a*b;
					break;
				case '/':
					c=a/b;
					break;
			}
			printf("After switch processing,the result is : %.2f\n\n",c);
		}
	}
}
