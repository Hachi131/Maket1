#include<stdio.h>
#include<stdlib.h>

int trangle(int n) {
	int i, j;
	for (i = 0; i < n; i++) {
		for (j = 0; j <= n - i; j++) //�����n-i���հ�
			putchar(' '); //�����һ�У������n/2-1���հ�
		for (j = 0; j <= 2 * i; j++)//�����2*i�� *
			putchar('*');//�����һ�� *
		putchar('\n');
	}
	return 0;
}
int main() {
	int n;
	printf("��������n:");
	scanf_s("%d", &n);
	printf("\n");
	trangle(n);
	system("pause");
	return 0;
}