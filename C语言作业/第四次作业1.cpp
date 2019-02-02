#include<stdio.h>
int main()
{
	int n,num,m,ok;
	double ava,ans;
	scanf("%d",&n);
	int i,j;
	for(i=1; i<=n; i++)
	{
		scanf("%d",&ok);
		if(ok==0)
		{
            ava=0;
			ans=0;
			num=0;
			for(j=1; j<=10; j++)
			{
				scanf("%d",&m);
				if(m<=0)
					continue;
				num++;
				ans+=m;

			}
			ava=ans/num;
			if(num!=0)
			printf("In \"continue\" way,numbers=%d,average=%f\n",num,ava);
		}
		if(ok==1)
		{
			ava=0;
			ans=0;
			num=0;
			for(j=1; j<=10; j++)
			{
				scanf("%d",&m);
				if(m>0)
				{
					num++;
					ans+=m;
				}
			}
			ava=ans/num;
			if(num!=0)
			printf("In \"no continue\" way,numbers=%d,average=%f\n",num,ava);
		}
	}
}
