#include<stdio.h>
int main()
{
	printf("please input n:");
	int n,i,s=1;
	scanf("%d",&n);
	i=1; 
	while(i<=n)
	{
		s=i*s;
		i++;
	}
	printf("%d",s);
 } 
 
// {
// 	printf("please input n:");
//	int n,i,s=1;
//	scanf("%d",&n);
//	i=1; 
//	do
//	{
//		s=s*i;
//	}
//	while(i++<n);
//	printf("%d",s);
// }
