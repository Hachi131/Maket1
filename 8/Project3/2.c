#include<stdio.h>
#include<stdlib.h>

int main() {
	printf("����һ���ַ���\n");
	char ch;
	int i, count = 0, word = 0;
	//getcharֻ�ܽ��յ����ַ�����������Ҳ���ַ�����ͬʱ�������ַ��ַ�ʱ��Ҳֻ����һ���ַ�
	while ((ch = getchar()) != '\n') //getchar��������ַ�����һ���ַ����������ch=getchar����
		if (ch == ' ') //���ch= ���ַ�������ִ��1
			word = 0;
		else if (word == 0) {  //����ִ��2
			word = 1;
			count++;
		}
	printf("�ܹ���%d������\n", count);
	system("pause");
	return 0;
}