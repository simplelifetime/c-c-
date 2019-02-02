#include<stdio.h>
#include<stdlib.h>
int main()
{
	char ch;
	int ok=1;
	FILE *fp;
	fp=freopen("123.out","w",stdout);
	while((ch=getchar())!=EOF)
	{
		if(ch>='a'&&ch<='z'&&ok==1)
		{
			putchar(ch-32);
			ok=0;
			continue;
		}
		if(ch==' '||ch=='\n')
		ok=1;
		putchar(ch);
		
	}
	fclose(fp);                      /* ¹Ø±Õfilename */
 	return 0;	
}
