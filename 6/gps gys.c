// shtft+alt+enter 编辑区最大化
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main() {
	int a, b, c, i, j;
	printf("请输入两个数:");
	scanf_s("%d%d", &a, &b);
	if (a < b) {
		j = a;
		a = b;
		b = j;
	}

	i = a * b;
	c = a % b;
	while (c!=0){
		a = b;
		b = c;
		c = a % b;
}
	system("pause");
	printf("最大公约数是:\n%d\n", b);
	printf("最大公倍数是:\n%d\n", i / b);
}