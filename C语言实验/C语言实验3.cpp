#include<stdio.h>
int main()
{
 printf("������x,m,n��xΪ16��������") ; 
 unsigned short x,m,n;
 scanf("%hx",&x);
 scanf("%hd",&m);
 scanf("%hd",&n);
 unsigned short mask=(x>>m)<<(16-n);
 if(m>15||m+n>16)
 printf("�������");
 else 
 printf("ans=%hx",mask);
} 

