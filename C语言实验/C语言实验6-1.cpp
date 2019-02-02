#include<stdio.h>
void sort(int [],int);
int main(void)
{
	int a[10] = {27, 13, 5, 32, 23, 3, 17, 43, 55, 39};
	int i;
	sort(a,10);
	for(i = 0; i < 10; i++)
		printf("%6d",a[i]);
	printf("\n");
	return 0;

}
void sort(int b[], int n)

{
	int i, j, t;
	for (i = 0; i < n -1 ; i++)
		for ( j = 0; j < n - i - 1 ; j++)
			if(b[j]>b[j+1])
				t = b[j], b[j] = b[j+1], b[j+1] = t;
}

//错误1：第二行，函数声明应放在主函数外部
//错误2：第七行，sort函数中参数应为数组名 
//错误3：第20行，若按升序排序，则需将相应符号更改为> 



