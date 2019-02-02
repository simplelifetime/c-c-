#include<stdio.h>
#include<math.h>
int prime(int n)
{
	int i;
	for(i=2;i<=sqrt(n);i++)
	if(!(n%i))
	return 0;
	return 1;
 } 
int main()
{
	int m,n,i,p=1,j;
	while(scanf("%d%d",&m,&n)!=EOF)
	{
		if(m%2)
		m++;
		if(n%2)
		n--;
		for(i=m;i<=n;i=i+2)
		{
			for(j=2;j<=i/2;j++)
			{
				if(prime(j)&&prime(i-j))
				{
				printf("%d=%d+%d\n",i,j,i-j);
				break;
			    }
			}
		} 
		p++;
		printf("\n");
	} 
 } 
