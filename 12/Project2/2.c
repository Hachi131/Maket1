#include<stdio.h>
#include<stdlib.h>

int main() {
	int i, n;
	double sum = 1;
	printf("����n:");
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++)
		sum = sum * i;
	printf("n�Ľ׳�Ϊ:%d!=%lf", n, sum);
	printf("\n");
	system("pause");
	return 0;
}