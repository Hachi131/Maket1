#include<stdio.h>
#include<stdlib.h>

//�����Ķ��壨����һ���µĺ�����
//int �����ķ�������
//Add ������
//int x,int y �����Ĳ���
//{}������
int Add(int x, int y) {
	// sum
	int sum = x + y;
	return sum;
	//return ��ʾ����������
}
int main() {
	int a = 10;
	int b = 20;
	int c = Add(a, b);
	printf("%d\n", c);
	//�����ĵ���
	system("pause");
	return 0;
}