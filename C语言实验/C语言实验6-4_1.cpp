#include<stdio.h>
int main()
{
	int a[3][4],b[4][3];
	int i,j;
	for(i=0; i<4; i++)
		for(j=0; j<3; j++)
			scanf("%d",&a[j][i]);
	for(i=0; i<3; i++)
		for(j=0; j<4; j++)
			b[j][i]=a[i][j];
	for(i=0; i<4; i++)
	{
		for(j=0; j<3; j++)
			printf("%5d",a[j][i]);
		printf("\n");
	}
	printf("\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<4; j++)
			printf("%5d",b[j][i]);
		printf("\n");
	}
}
