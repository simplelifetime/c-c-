#include<stdio.h>
int main()
{
	int n,i,j,t,p;
	while(scanf("%d",&n)&&n!=0)
	{
	int a[18][18]= {0};
	for(i=1; i<=10; i++)
	{
		a[1][i]=1;
		a[i][i]=1;
	}
	for(j=1; j<=n; j++)
	{
		for(i=1; i<=j; i++)
		{
			if(a[i][j]==0)
				a[i][j]=a[i-1][j-1]+a[i][j-1];
		}
	}
	for(j=1; j<=n; j++)
	{
		for(t=1; t<=2*(n-j); t++)
			printf(" ");
		printf("%d",a[1][j]);
		for(p=2;p<=j;p++)
		printf("%4d",a[p][j]);
		printf("\n");
	}
	printf("\n");
}
}
