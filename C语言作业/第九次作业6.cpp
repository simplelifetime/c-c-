#include<stdio.h>
#include<string.h>
void mycpy(char t[],char s[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		t[i]=s[i];
	 } 
}
int main()
{
	char t[1005],s[1005];
	int n,i,j;
	scanf("%d",&n);
	getchar();
	for(i=1;i<=n;i++)
	{
		memset(s,0,sizeof(s));
		memset(t,0,sizeof(t));
		char c;
		int m=0,k;
		while((c=getchar())!='\n')
		{
			t[m++]=c;
		}
		scanf("%d",&k);
		getchar();
		mycpy(s,t,k);
		printf("%s",s);
		printf("\n");
	}
}
