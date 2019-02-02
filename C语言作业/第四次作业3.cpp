#include<stdio.h>
using namespace std;
int main()
{
	double pi=0.0,t=-1.0,p,s;
	int m=1.0;
	do
	{
		t=t+2;
		p=1/t;
		if(m%2==0)
		pi-=p;
		else
		pi+=p;
		m++;
	 } 
    while(p>=1e-5);
    s=4*pi;
	printf("%.9lf\n",s);
}
