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
	printf("����������������");
	scanf("%d%d",&m,&n);
	t=qz(m,n);
	if(t!=1)
	printf("%d��%d�����Լ����:%d",m,n,t);
	else
	printf("%d��%d����",m,n);
}
