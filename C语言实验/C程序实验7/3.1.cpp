#include<stdio.h>
struct BITS{
	unsigned int bit0:1;
	unsigned int bit1:1;
	unsigned int bit2:1;
	unsigned int bit3:1;
	unsigned int bit4:1;
	unsigned int bit5:1;
	unsigned int bit6:1;
	unsigned int bit7:1;
};
union bits{
	unsigned short a;
	struct BITS s;
}bit;
void f0(void)
{
	printf("The function0 is called!\n");
}
void f1(void)
{
	printf("The function1 is called!\n");
}
void f2(void)
{
	printf("The function2 is called!\n");
}
void f3(void)
{
	printf("The function3 is called!\n");
}
void f4(void)
{
	printf("The function4 is called!\n");
}
void f5(void)
{
	printf("The function5 is called!\n");
}
void f6(void)
{
	printf("The function6 is called!\n");
}
void f7(void)
{
	printf("The function7 is called!\n");
}
void (*p[8])(void)={f0,f1,f2,f3,f4,f5,f6,f7};
int main()
{
	void (*s)(void)=f0;
	int g,i,j;
	scanf("%d",&g);
	for(i=1;i<=g;i++)
	{
		scanf("%hu",&bit.a);
		printf("%hu:\n",bit.a);
		if(bit.s.bit0==1)
		p[0]();
		if(bit.s.bit1==1)
		p[1]();
		if(bit.s.bit2==1)
		p[2]();
		if(bit.s.bit3==1)
		p[3]();
		if(bit.s.bit4==1)
		p[4]();
		if(bit.s.bit5==1)
		p[5]();
		if(bit.s.bit6==1)
		p[6]();
		if(bit.s.bit7==1)
		p[7]();
		printf("\n");
	}
	return 0;
}
