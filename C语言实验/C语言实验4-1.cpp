#include "stdio.h"
long sum_fac(int);
int main(void)
{
    int k;
    for(k=1;k<6;k++)
         printf("k=%d\tthe sum is %ld\n",k,sum_fac(k));
}
long sum_fac(int n)
{
    long s=0;
    int i;
    long fac=1;
    for(i=1;i<=n;i++)
       { fac*=i;
     s+=fac;
     } 
    return s;
}

//错误1：第2行，sum_fac函数需提前定义 
//错误2：第13行，fac未初始化 
//错误3:第15-18行,两个语句同属于一个循环下，需要用大括号括起 
