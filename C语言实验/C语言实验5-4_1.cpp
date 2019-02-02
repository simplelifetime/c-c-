#include<stdio.h>
#include<math.h>
#define p (a+b+c)/2
#define area sqrt(s*(s-a)*(s-b)*(s-c))
int main()
{
	float a,b,c;
	float s;
	while(scanf("%f%f%f",&a,&b,&c)!=EOF);
	{
    printf("%f %f %f",a,b,c);
    }
}

