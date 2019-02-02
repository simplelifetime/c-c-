#include<stdio.h>
int main()
{
	int n,t,t1,t2,t3;
	scanf("%d",&n);
	int i=1;
    while(i<=n)
	{
		scanf("%d",&t);
		t1=(t>>12)&(0Xf);
		t2=(t<<12)&(0Xf000);
		t3=t&(0Xff0);
		printf("%d\n",t1+t2+t3);
		i++;
	}
 } 
