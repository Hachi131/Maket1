// shtft+alt+enter �༭�����
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main() {
	int a, b, c, i, j;
	printf("������������:");
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
	printf("���Լ����:\n%d\n", b);
	printf("��󹫱�����:\n%d\n", i / b);
}