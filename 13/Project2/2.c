#include<stdio.h>
#include<stdlib.h>

int main() {
	int a, b, c; //��������
	printf("����a��b��c��");
	scanf_s("%d %d %d", &a, &b, &c);
	if (a + b > c&& a - c < b)
		printf("�ܹ���������\n");
	else
		printf("���ܹ���������\n");
	system("pause");
	return 0;


}