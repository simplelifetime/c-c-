#include<stdio.h>
int main()
{
	int a[3];
	int b[3]={0};
	int t,max,min;
	while(scanf("%d%d%d",&a[0],&a[1],&a[2])!=EOF)
	{
    if(a[0]!=a[1]&&a[1]!=a[2]&&a[0]!=a[2])
	{
	max=(a[2]>=((a[1]>=a[0])?a[1]:a[0]))?2:((a[1]>=a[0])?1:0);
	min=(a[2]<=((a[1]<=a[0])?a[1]:a[0]))?2:((a[1]<=a[0])?1:0);
    }
    else if(a[0]==a[1]&&a[1]!=a[2])
    {
    	min=1;
    	max=2;
	}
	else if(a[1]==a[2]&&a[0]!=a[1])
	{
		min=0;
		max=2;
	}
	else if(a[0]==a[1]&&a[1]==a[2])
	{
		min=1;
		max=2;
	}
	else if(a[0]==a[2]&&a[1]!=a[2])
	{
		min=1;
		max=2;
	}
	int i;
	for(i=0;i<=2;i++)
	{
		if(i!=max &&i!=min)
		t=i;
	}
   	if(t==0)
	printf("A:%d\n",a[0]);
	if(t==1)
	printf("B:%d\n",a[1]);
	if(t==2)
	printf("C:%d\n",a[2]);
    }
}
