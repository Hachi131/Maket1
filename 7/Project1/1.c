#include<stdio.h>
#include<stdlib.h>
// ��������С��������

int main() {
	int a, b, i, j;//����4���������α���
	printf("�����룺a,b,i\n");
	scanf_s("%d%d%d", &a, &b, &i);//��������������
	if (a > b) {  //���a����b�������м����jʵ��a��bֵ�Ļ���
		j = a;
		a = b;
		b = j;
	}
	if (a > i) {  //���aС��i�������м����jʵ��a��cֵ�Ļ���
		j = a;
		a = i;
		i = j;
	}
	if (b > i) {  //���a����i�������м����jʵ��a��iֵ�Ļ���
		j = b;
		b = i;
		i = j;
	}
	printf("��С����˳���ǣ�\n");  
	printf("%d %d %d", a, b, i);   //�������˳��a��b��c��ֵ
	system("pause");
	return 0;
}
		
