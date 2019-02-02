#include<stdio.h>
int main()
{
	int a[38]= {0}; //0-9指数字，10-36指字母，37指other
	char c;
	int i;
	while((c=getchar())!=EOF)
	{
		if(c>=48&&c<=57)
			a[c-48]++;
		else if(c>=65&&c<=90)
			a[c-55]++;
		else if(c>=97&&c<=122)
			a[c-87]++;
		else
			a[37]++;
	}
	for(i=0; i<=9; i++)
	{
		printf("%d:%d",i,a[i]);
		if(i!=9)
			printf(" ");
	}
	printf("\n");
	for(i=97; i<=122; i++)
	{
		printf("%c:%d",i,a[i-87]);
		if(i!=122)
			printf(" ");
	}
	printf("\n");
	printf("other:%d\n",a[37]);
}
