#include<stdio.h>
double fx(double n)
{
	return (3*n*n*n-4*n*n-5*n+13);
}
double fxd(double n)
{
	return (9*n*n-8*n-5);
}
double jdz(double x,double y)
{
	if(x-y>=0)
	return (x-y);
	else
	return (y-x);
	
}
int main()
{
	double x1,x2;
    x1=5;  x2=0; 
	 while(jdz(x1,x2)>1e-6)
	 {
	 	x1=x2;
	 	x2=x1-fx(x1)/fxd(x1); 
	 }
	 printf("%lf",x2);
}
