#include<stdio.h>
#include<stdlib.h>

int main() {
	char a, b;
	printf("����һ����д��ĸ:\n");
	a = getchar();
	b = a + 32;
	printf("ת�������ĸ:%c,%d\n", b, b);
	system("pause");
	return 0;
}