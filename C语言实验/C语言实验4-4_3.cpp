#include<stdio.h>
#include<math.h>
int prime(int n)
{
	int i;
	for(i=2; i<=sqrt(n); i++)
		if(!(n%i))
			return 0;
	return 1;
}
int main()
{
	int m,n;
	while(scanf("%d%d",&n,&m)!=EOF)
	{
		if(n%2==1)
			n++;
		if(m%2==1)
			m--;
		for(int p=n; p<=m; p=p+2)
		{
			for(int c=2; c<=p/2; c++)
			{
				if(prime(c)&&prime(p-c))
				{
					printf("%d=%d+%d\n",p,c,p-c);
					break;
				}
			}
		}
	}
}


