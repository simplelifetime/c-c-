#include<stdio.h>
#define swap(x,y) t=x,x=y,y=t
int main()
{
	int t,x,y;
	int i=1;
	while(scanf("%d%d",&x,&y)!=EOF)
	{
		printf("Case %d:\n",i);
		printf("Before Swap:a=%d b=%d\n",x,y);
		swap(x,y);
		printf("After Swap:a=%d b=%d\n",x,y);
		printf("\n");
		i++;
	}
 } 
