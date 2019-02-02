#include<stdio.h>
int main()
{
	int n,s=1,t,i;
	printf("please input t:");
	scanf("%d",&t);
	while(s<t) 
	{
		s=s*i;
		i++;
	}
	printf("%d",i-1);
}
