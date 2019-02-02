#include<stdio.h>
#include<cstring>
char a[50]="The adopted symbol is ",b[27]="abcdefghijklmnopqrstuvwxyz";
void strncat(char [],char [],int);
int main(void)
{
	strncat(a, b, 4);
	printf("%s",a);
	return 0;
}
void strncat(char *s,char *t, int n)
{
	int i =0, j;
	while(s[i++]) ;
	for(j = 0,i=i-1; j < n;)
	{
		s[i++]=t[j++];
	}
	s[i] = '\0';
}

