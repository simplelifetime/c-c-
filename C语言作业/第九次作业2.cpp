#include<stdio.h>
#include<string.h>
int a[60];
void jiaohuan(int *a,int t,int m)
{
	int b[60];
	int i;
	for(i=m-t;i<m;i++)
	b[i]=*(a+i+t-m);
	for(i=0;i<m-t;i++)
	b[i]=*(a+i+t);
	for(i=0;i<m;i++)
	a[i]=b[i];
}
int main()
{
	int n,t,i,j;
	while(scanf("%d%d",&n,&t)!=EOF)
	{
		memset(a,0,sizeof(a));
		for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		jiaohuan(a,t,n);
		for(i=0;i<n;i++)
		{
		printf("%d",a[i]);
		if(i!=n-1)
		printf(" ");
	}
		printf("\n");
	} 
 } 
