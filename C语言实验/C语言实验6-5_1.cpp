#include<stdio.h>
#include<string.h>
void strnins(char s[],char t[],int n)
{
	int i,j,k,m;
	i=m=0;
	while(s[i]!='\0')    i++;
	i--;
	while(t[m]!='\0')    m++;
	m--;
	for(;i>=n;i--)
	s[i+m+1]=s[i];
	for(j=n,k=0;t[k]!='\0';k++,j++)
	s[j]=t[k];
		
}
int main()
{
	char a[100],b[100];
	int n;
	scanf("%s %s",a,b);
	scanf("%d",&n);
	strnins(a,b,n);
	printf("%s",a);
}
