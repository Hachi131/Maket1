#include<stdio.h>
#include<stdlib.h>

int main() {
	char a, b;
	printf("����һ��Сд��ĸ��\n");
	//getchar����ֻ�ܽ��յ����ַ�����������Ҳ���ַ�����
	//ͬʱ�������һ���ַ�ʱ��Ҳֻ���յ�һ���ַ���Ҳ������stdio.������
	a = getchar(); //����һ���ַ�
	b = a - 32;  // //Сд��ĸ���д��ĸ֮��Ĳ�ֵΪ32
	printf("ת�������ĸΪ:%c,%d\n", b, b);
	system("pause");
	return 0;
}