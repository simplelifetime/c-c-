#include<stdio.h>
int main()
{
	int x;
	float ans=0;
	while(scanf("%d",&x))
	{
		ans=0;
		if(x==0)
			break;
		if(x>5000)
		{
			ans+=(x-5000)*0.25;
			x=5000;
		}
		if(x<=5000&&x>4000)
		{
			ans+=(x-4000)*0.2;
			x=4000;
		}
		if(x<=4000&&x>3000)
		{
			ans+=(x-3000)*0.15;
			x=3000;
		}
		if(x<=3000&&x>2000)
		{
			ans+=(x-2000)*0.1;
			x=2000;
		}
		if(x<=2000&&x>1000)
			ans+=(x-1000)*0.05;
		printf("%f\n",ans);
	}
}

//#include<stdio.h>
//int main()
//{
//	float ans=0;
//	int x;
//	while(scanf("%d",&x)&&x!=0)
//	{
//		if(x==0)
//		break;
//		if(x>1000)
//		{
//			ans=0;
//			switch((x-1)/1000)
//			{
//				default:
//					ans+=(x-5000)*0.25;
//					x=5000;
//				case 4:
//					ans+=(x-4000)*0.2;
//					x=4000;
//				case 3:
//					ans+=(x-3000)*0.15;
//					x=3000;
//				case 2:
//					ans+=(x-2000)*0.1;
//					x=2000;
//				case 1:
//					ans+=(x-1000)*0.05;
//			}
//			printf("%f\n",ans);
//		}
//		else
//		{
//			printf("%f\n",ans);
//		}
//	}
//}



