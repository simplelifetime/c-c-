#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i;
	float a,b,c,s,p;
	for(i=1;i<=n;i++)
	{
		scanf("%f%f%f",&a,&b,&c);
		s=(a+b+c)/2;
		p=sqrt(s*(s-a)*(s-b)*(s-c));
		printf("area=%.6f\n",p);
	}
}
