#include<stdio.h>
#define max (((a>b)?a:b)>c)?((a>b)?a:b):c 
#define sum(d,e) d+e
int main()
{
	int a, b, c,t;
	float d, e;
	printf("Enter three integers:");
	scanf("%d%d%d",&a,&b,&c);
	t=max;
	printf("\nthe maximum of them is %d\n",t);

	printf("Enter two floating point numbers:");
	scanf("%f %f",&d,&e);
	printf("\nthe sum of them is  %f\n",sum(d,e));
}


