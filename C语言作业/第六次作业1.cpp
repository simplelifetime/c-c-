#include<stdio.h>
int main()
{
     int n,a,ans;
     scanf("%d",&n);
     int i,j;
     for(i=1;i<=n;i++)
     {
     	ans=0;
     	for(j=1;j<=10;j++)
     	{
		 
     	scanf("%d",&a); 
     	ans+=a;
     }
     	printf("sum=%d\n",ans);
	 }
}
