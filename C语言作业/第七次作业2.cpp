#include<stdio.h>
int kjs(unsigned x,int y)
{
	int i,t;
	for(i=1;i<=y;i++)
	{
		t=x%10;
		if(x==0)
		return -1;
		x=x/10;
	}
	return t;
}
int main()
{
	unsigned m;
	int t;
	while(scanf("%u %d",&m,&t)!=EOF)
	{
		printf("%d\n",kjs(m,t));
	}
}
