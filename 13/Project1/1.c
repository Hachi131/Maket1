#include<stdio.h>
#include<stdlib.h>

int trangle(int n) {
	int i, j;
	for (i = 0; i < n; i++) {
		for (j = 0; j <= n - i; j++) //先输出n-i个空白
			putchar(' '); //例如第一行，先输出n/2-1个空白
		for (j = 0; j <= 2 * i; j++)//再输出2*i个 *
			putchar('*');//在输出一个 *
		putchar('\n');
	}
	return 0;
}
int main() {
	int n;
	printf("输入行数n:");
	scanf_s("%d", &n);
	printf("\n");
	trangle(n);
	system("pause");
	return 0;
}