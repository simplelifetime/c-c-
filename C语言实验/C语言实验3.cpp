#include<stdio.h>
int main()
{
 printf("请输入x,m,n（x为16进制数）") ; 
 unsigned short x,m,n;
 scanf("%hx",&x);
 scanf("%hd",&m);
 scanf("%hd",&n);
 unsigned short mask=(x>>m)<<(16-n);
 if(m>15||m+n>16)
 printf("输入错误！");
 else 
 printf("ans=%hx",mask);
} 

