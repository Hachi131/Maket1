#include<stdio.h>
#include<stdlib.h>

int main() {
	int a, b, c;
	printf("����������������a��b��c:");
	scanf_s("%d %d %d", &a, &b, &c);
	if(a+b>c&&b+c>a&&a+c>b){  //��a+b>c��b+c>a��a+c>bʱ
	if (a == b && a == c)     //��a����b��a����cʱ
		printf("������Ϊ�ȱ�������\n");
	else if (a == b || a == c || b == c)  //��a����b��a����c��b����cʱ
		printf("������Ϊ����������\n");
	else if ((a * a + b * b == c * c) || (a * a + c * c == b * b) || (b * b + c * c == a * a))
		printf("������Ϊֱ��������\n");
	else
		printf("������Ϊ��ͨ������\n");
	}
	else
		printf("���ܹ���������\n");
	system("pause");
	return 0;
}