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
     		t=p;    //��¼��һ���ڵ� 
     		p=a[p];      //������һ���ڵ� 
		 }
		 b[i]=p;     //�ýڵ㱻��¼���� 
		 p=a[p];    //������һ���ڵ� 
		 a[t]=p;    //ɾ���ýڵ� 
	 }
	 for(i=0;i<9;i++)
	 printf("%6d",b[i]);
	 printf("%6d",p);
}
