#include<stdio.h>
int main()
{
	int i,n,s=1;
	printf("please enter n:");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	s=s*i;
	printf("%d!=%d",n,s);
	return 0;
}

//错误如下：
//1：第六行 scanf应用取地址符&
//2：第十行 return 0应放在主函数内部

 
