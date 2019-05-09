#include<stdio.h>
#include<stdlib.h>
#define MAX 3
//冒泡排序
int main()
{
	int a[MAX] = { 9,6,14 };
	int i = 0;
	int t = 0;
	int j = 0;
	for (i = 0; i < MAX; i++)
	{
		for (j = 0; j < (MAX-1) - i; j++)//此处的MAX-1-i不是MAX-i的原因是j+1不会越界；
		{
			if (a[j + 1] > a[j])//外层循环循环一次就会把较大数往前移一位
			{
				t = a[j + 1];
				a[j + 1] = a[j];
				a[j] = t;
			}
		}
	}
	for (i = 0; i < MAX; i++)
	{
		printf("%d ", a[i]);
	}
	system("pause");
	return 0;
}