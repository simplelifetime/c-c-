#include<stdio.h>
int main()
{
	int a[13]={31,28,31,30,31,30,31,31,30,31,30,31,0};
	int b[13]={31,29,31,30,31,30,31,31,30,31,30,31,0};
	char *monthname[]={"January","February","March","April","May","June","July","August","September","October","November","December"}; 
    int n,i,m,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    	scanf("%d",&m);
    	if((m%4==0&&m%100!=0)||m%400==0)
		{
			for(j=0;j<=11;j++)
    		{
    			printf("%s,%d;",monthname[j],b[j]);
			}
		}
    	else
    	{
    		for(j=0;j<=11;j++)
    		{
    			printf("%s,%d;",monthname[j],a[j]);
			}
		}
	
		printf("\n");
	}
    
 } 
