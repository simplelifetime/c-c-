#include<stdio.h>
#include<string.h>
int len;
char t[2000];
int ok(int left)
{
	if(left>=len/2)
	return 1;
	if(t[left]!=t[len-1-left])
	return 0;
	return ok(left+1);
}
int main()
{
    int n,i,j;
    char c;
    scanf("%d",&n);
    getchar(); 
    for(i=1;i<=n;i++)
    {
    	int m=0;
    	while((c=getchar())!='\n')
    	{
    		t[m++]=c;
		}
		len=m;
		if(ok(0))
		printf("Yes!\n");
		else
		printf("No!\n");
	}
}
