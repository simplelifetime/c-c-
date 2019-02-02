#include<stdio.h>
#include<limits.h> 
#include<string.h>
char t[32];
void printbit(int k)
{
	int n=sizeof(int)*CHAR_BIT;
	int mask=(1<<(n-1));
	int i;
	for(i=0;i<32;i++)
	{
		t[i]=(k&mask)?'1':'0';
		k<<=1;
	}
}
int main()
{
    int a[100];
    int n,i;
    scanf("%d",&n);
    printbit(n);
    printf("%s",t);
 } 
