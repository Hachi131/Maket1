#include<stdio.h>
#include<stdlib.h>

int main() {
	char a, b;
	printf("输入一个大写字母:\n");
	a = getchar();
	b = a + 32;
	printf("转换后的字母:%c,%d\n", b, b);
	system("pause");
	return 0;
}