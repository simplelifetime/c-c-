#include<stdio.h>
#include<math.h>
int prime(int n)
{
	int i;
	for(i=2;i<=sqrt(n);i++)
	if(!(n%i))
	return 0;
	return 1;
 } 
int main()
{
	int n;
     printf("������һ�����ڵ���4��ż����"); 
	 scanf("%d",&n) ;
	 for(int i=2;i<=n/2;i++)
	 {
	 	if(prime(i)&&prime(n-i))
	 	{
		 printf("%d=%d+%d\n",n,i,n-i);
		 return 0;
	}
	 }
 } 
