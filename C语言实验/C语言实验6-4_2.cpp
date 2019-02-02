#include<stdio.h>
int a[20];
int main()
{
	int n,i=0,j;
	scanf("%d",&n);
	while(n!=0)
	{
		a[i]=n%2;
		n/=2;
		i++;
	}
	i--;
	for(;i>=0;i--)
	printf("%d",a[i]);
}
