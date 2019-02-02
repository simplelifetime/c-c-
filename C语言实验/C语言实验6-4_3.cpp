#include<stdio.h>
#include<string.h>
#include<math.h>
int flag,get;
char t[20][40];
char s[40];
int m[40];
int want;
void swap1(int *a,int *b)
{
	int t=*a;
	*a=*b;
	*b=t;
}
void swap2(char a[],char b[])
{
	char c[40];
	char d[40];
	int i;
	for(i=0; i<=strlen(a); i++)
		c[i]=a[i];
	for(i=0; i<=strlen(b); i++)
		d[i]=b[i];
	for(i=0; i<=strlen(a); i++)
		a[i]=d[i];
	a[i+1]='\0';
	for(i=0; i<=strlen(b); i++)
		b[i]=c[i];
	b[i+1]='\0';
}
int main()
{
	int n,i,j;
	scanf("%d",&n);
	getchar();
	for(i=1; i<=n; i++)
	{
		scanf("%s",t[i]);
		scanf("%d",&m[i]);
	}
	for(i=n-1; i>1; i--)
	{
		for(j=1; j<=i; j++)
		{
			if(m[j]<m[j+1])
			{
				swap1(&m[j],&m[j+1]);
				swap2(t[j],t[j+1]);
			}
		}
	}
	scanf("%d",&want);
	int first=1,end=n;
	while(first<=end)
	{
		flag=0;
		int s=(first+end)/2;
		if(m[s]==want)
		{
			printf("%s %d",t[s],m[s]);
			flag=1;
			break;
		}
		else if(m[s]>want)
		first=s+1;
		else
		end=s-1;	
	}
	if(flag==0)
	printf("Not found!\n");
}
