#include<stdio.h>
int zs(int m)
{
	int i;
	for(i=2;i*i<=m;i++) 
	{
		if(m%i==0)
		return 0; 
	}
	return 1;
} 
int main()
{
    int n,m,j;
	scanf("%d",&n);
	int i;
	for(i=1;i<=n;i++)
	{
		scanf("%d",&m);
		if(m==4)
		{
			printf("4=2+2\n");
			continue;
		 } 
		for(j=3;j<=m/2;j=j+2)
		{
			if(zs(j)&&zs(m-j))
			{
				printf("%d=%d+%d\n",m,j,m-j);
				break;
			}
		}
	}
}
