#include<stdio.h>
#include<stdlib.h>
//打印100-200之间的素数
int main() {
	int a = 0;
	int b = 0;
	for (a = 101; a <= 200; a += 2) {
		int c = 0;
		for (c = 2; c <= a - 1; c++) {
			if (a % c == 0)
				break;
		}
		if (a == c) {
			b++;
			printf("%d ", a);
		}
	}
	printf("\nb=%d", b);
	system("pause");
	return 0;
}