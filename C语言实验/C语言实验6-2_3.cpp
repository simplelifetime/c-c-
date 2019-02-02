#include<stdio.h>
#define M 10
#define N 3
int main(void)
{
     int a[11],b[10];
     int i,j,k,p=1,t;
     for(i=1;i<=9;i++)
     {
     	a[i]=i+1;
	 }
	 a[10]=1;
     for(i=0;i<9;i++)
     {
     	for(k=1;k<3;k++)
     	{
     		t=p;    //记录上一个节点 
     		p=a[p];      //新生成一个节点 
		 }
		 b[i]=p;     //该节点被记录下来 
		 p=a[p];    //进入下一个节点 
		 a[t]=p;    //删除该节点 
	 }
	 for(i=0;i<9;i++)
	 printf("%6d",b[i]);
	 printf("%6d",p);
}
