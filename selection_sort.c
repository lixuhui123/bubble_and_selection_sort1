#include<stdio.h>
#include<stdlib.h>
int main()//������
{
	int a[10];
	int i, j, w;
	printf("������10�����֣� \n");
	for (i = 0; i < 10; i++)
		scanf("%d", &a[i]);
	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
			if (a[i] < a[j])
			{
				w = a[i];
				a[i] = a[j];
				a[j] = w;
			}
	}
	printf("�����:\n");
	for (i = 0; i < 10; i++)
		printf("%d ", a[i]);
	printf("\n");
	system("pause");
	return 0;
}
