#include<stdio.h>
int geweishu(int n)
{
	int sum=0;
	while(n!=0)
	{
		sum+=n%10;
		n/=10;
	}
	return sum;
}
int saizi(int n)
{
	return (geweishu(n)%6)+1;
}
int main()
{
	int n,i,t1,t2,p1,p2,j,ok,now;
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	{
		ok=0;
		j=1;
		scanf("%d%d",&p1,&p2);
		t1=saizi(p1);
		t2=saizi(p2);
		if((t1+t2)==7||(t1+t2)==11)
		{
			printf("success!\n");
			continue;
		}
		else if((t1+t2)==1||(t1+t2)==2||(t1+t2)==12)
		{
			printf("fail!\n");
			continue;
		}
		else
		{
			now=t1+t2;
			while(ok==0)
			{
				t1=saizi(p1+j);
				t2=saizi(p2+j);
				if(t1+t2==7)
				{
					printf("fail!\n");
					ok=1;
				}
				else if(t1+t2==now)
				{
					printf("success!\n");
					ok=1;
				}
				j++;
			}
		}
	}
}
