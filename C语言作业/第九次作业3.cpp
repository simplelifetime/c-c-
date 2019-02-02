#include<stdio.h>
int a[40];
//void swap(int *a,int *b)
//{
//	int t=*a;
//	*a=*b;
//	*b=t; 
//}
int main()
{
	int n,i,max,maxi,j,t;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	scanf("%d",&a[i]);
	for(j=n;j>=1;j--)
	{
		max=-100005;
		for(i=1;i<=j;i++)
		{
			if(a[i]>max)
			{
				max=a[i];
				maxi=i;
			}
		}
		t=a[j];
		a[j]=a[maxi];
		a[maxi]=t;
	 } 
	 for(i=1;i<=n;i++)
	 {
	 printf("%d",a[i]);
	 if(i!=n)
	 printf(" ");
     }
     printf("\n");
}
