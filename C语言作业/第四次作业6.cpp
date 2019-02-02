#include<stdio.h>
int main()
{
	int m,a,b,c,sum;
	scanf("%d",&m);
	int i,j;
	int t[13]={0,31,0,31,30,31,30,31,31,30,31,30,31};
	for(i=1;i<=m;i++)
	{
		sum=0;
		scanf("%d%d%d",&a,&b,&c);
		if((a%4==0&&a%100!=0)||a%400==0)
		t[2]=29;
		else
		t[2]=28;
		for(j=1;j<=b-1;j++)
		sum+=t[j];
		sum+=c;
		printf("%d\n",sum);
	}
}
