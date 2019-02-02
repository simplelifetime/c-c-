#include<stdio.h>
int main()
{
	int n,i,t;
	char m;
	scanf("%d",&n);
	//fflush(stdin);
	for(i=1;i<=n;i++)
	{
		getchar();
		//fflush(stdin);
		t=(int)m;
	    if(t>=48&&t<=57)
		printf("%d",t-48);
		else if(t>=65&&t<=70)
		printf("%d",t-66+11);
		else if(t>=97&&t<=102)
		printf("%d",t-98+11);
		else
		printf("%d",t);
		printf("\n");
	}
}
