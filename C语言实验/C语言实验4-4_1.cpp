#include<stdio.h>
int qz(int x,int y)
{
	if(x==y)
	return x;
	else if(x>y)
	qz(x-y,y);
	else if(x<y)
	qz(x,y-x);
}
int main()
{
	int m,n,t;
	printf("请输入两个整数：");
	scanf("%d%d",&m,&n);
	t=qz(m,n);
	if(t!=1)
	printf("%d和%d的最大公约数是:%d",m,n,t);
	else
	printf("%d与%d互质",m,n);
}
