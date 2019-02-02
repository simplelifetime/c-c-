#include<stdio.h>
int main()
{
	int n;
	while(scanf("%d",&n)&&n!=0)
	{
	while(n!=0)
	{
		printf("%d",n%10);
		n/=10;
	}
	printf("\n");
}
}
