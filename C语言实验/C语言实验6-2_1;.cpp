#include<stdio.h>
int main()
{
	int a[11]= {0},b[10];
	int i,j=1,k;
	for(i=10; i>1; i--)
	{
		k=1;
		while(k<3)
		{
			if(a[j]==0)
			{
				j++;
				k++;
			}
			if(j>10)
				j=1;
			while(a[j]==1)
			{
				j++;
				if(j>10)
					j=1;
			}
		}
		a[j]=1;
		b[10-i]=j;
	}
	for(i=0; i<9; i++)
		printf("%6d",b[i]);
	for(i=1; i<=10; i++)
	{
		if(a[i]==0)
		{
			printf("%6d",i);
			return 0;
		}
    }
}
