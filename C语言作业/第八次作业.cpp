#include<stdio.h>
#define swap(x,y) t=x,x=y,y=t
int main()
{
	int n,t,x,y;
	scanf("%d",&n);
	int i;
	for(i=1;i<=n;i++)
	{
		scanf("%d%d",&x,&y);
		swap(x,y);
		printf("%d %d\n",x,y);
	}
 } 
