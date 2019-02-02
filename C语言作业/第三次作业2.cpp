#include<stdio.h>
int main()
{
	int n,m,i,t1,t2;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&m);
		t1=(m>>8)&0Xff;
		t2=m&0Xff;
		printf("%c,%c\n",t1,t2);
	 } 
}
